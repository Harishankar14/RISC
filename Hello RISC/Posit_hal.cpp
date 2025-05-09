#include <iostream>
#include <cmath>
#include <cstdint>
#include <bitset>

class Posit8 {
    uint8_t value;

public:
    Posit8(uint8_t val = 0) : value(val) {}

    static Posit8 pack(bool sign, int regime, int exponent, uint8_t fraction);
    void unpack(bool &sign, int &regime, int &exponent, uint8_t &fraction) const;

    static Posit8 fromFloat(float f);
    float toFloat() const;

    uint8_t raw() const { return value; }
};


// Pack/Unpack


Posit8 Posit8::pack(bool sign, int regime, int exponent, uint8_t fraction) {
    uint8_t result = 0;
    int k = regime;
    int reg_len = std::abs(k) + 2; // Regime bits + terminating bit

    uint8_t regime_bits = 0;
    if (k >= 0)
        regime_bits = (0xFF << 1) & (0xFF << (8 - reg_len));
    else
        regime_bits = 0x1 << (8 - reg_len);

    result |= (regime_bits);

    int bits_used = reg_len;
    if (bits_used < 8) {
        result |= (fraction >> bits_used);
    }

    if (sign)
        result = (~result) + 1;  // Two's complement for negative

    return Posit8(result);
}

void Posit8::unpack(bool &sign, int &regime, int &exponent, uint8_t &fraction) const {
    uint8_t temp = value;
    if (temp == 0x80) {
        sign = false;
        regime = exponent = fraction = 0;
        return;
    }

    sign = temp & 0x80;
    if (sign) {
        temp = (~temp) + 1;
    }

    // Extract regime
    bool reg_bit = temp & 0x40;
    int k = 0;
    int i = 1;
    while ((temp & (0x80 >> i)) == (reg_bit ? (0x80 >> i) : 0)) {
        k += reg_bit ? 1 : -1;
        ++i;
    }
    regime = k;

    // No exponent (es = 0)
    int frac_shift = i + 1;
    if (frac_shift < 8) {
        fraction = (temp << frac_shift);
    } else {
        fraction = 0;
    }

    exponent = 0; // es = 0
}


// Conversion Functions


Posit8 Posit8::fromFloat(float f) {
    if (std::isnan(f)) return Posit8(0x80);     // Not a Real (NaR)
    if (f == 0.0f)     return Posit8(0x00);     // Zero

    bool sign = f < 0;
    float abs_f = std::fabs(f);

    int exp = static_cast<int>(std::floor(std::log2(abs_f)));
    float scale = std::ldexp(1.0f, exp);
    float frac = abs_f / scale - 1.0f;

    int k = exp;  // Since es = 0, k = exp
    uint8_t fraction = static_cast<uint8_t>(frac * 64); // take 6 bits of frac

    return pack(sign, k, 0, fraction);
}

float Posit8::toFloat() const {
    if (value == 0x00) return 0.0f;
    if (value == 0x80) return NAN;

    bool sign;
    int regime, exponent;
    uint8_t fraction;

    unpack(sign, regime, exponent, fraction);

    float useed_pow_k = std::ldexp(1.0f, regime); // useed = 2^1 since es = 0
    float frac_part = 1.0f + (fraction / 128.0f); // fraction is in [0, 64)/128

    float result = useed_pow_k * frac_part;

    return sign ? -result : result;
}


// Tests


void test(float input) {
    Posit8 p = Posit8::fromFloat(input);
    float recovered = p.toFloat();
    std::cout << "Float: " << input
              << " -> Posit8: 0x" << std::hex << int(p.raw()) << std::dec
              << " -> Recovered: " << recovered << "\n";
}

int main() {
    test(0.0f);
    test(1.0f);
    test(2.0f);
    test(0.5f);
    test(-1.0f);
    test(NAN);

    return 0;
}
