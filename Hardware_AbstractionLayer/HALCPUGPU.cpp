#include <iostream>
#include <memory>
#include <chrono>
#include <string>
#include <cassert>

// ---------------- Abstract Interface ----------------
class IHalOps {
public:
    virtual int add(int a, int b) = 0;
    virtual int mul(int a, int b) = 0;
    virtual float convert(int a) = 0;
    virtual ~IHalOps() = default;
};

// ---------------- CPU Implementation ----------------
class CpuHal : public IHalOps {
public:
    int add(int a, int b) override { return a + b; }
    int mul(int a, int b) override { return a * b; }
    float convert(int a) override { return static_cast<float>(a); }
};

// ---------------- GPU Implementation ----------------
class GpuHal : public IHalOps {
public:
    int add(int a, int b) override { return a + b; } // Simulate different behavior
    int mul(int a, int b) override { return a * b; }
    float convert(int a) override { return static_cast<float>(a); }
};

// ---------------- Profiling Wrapper ----------------
class ProfilingHal : public IHalOps {
    std::unique_ptr<IHalOps> impl;
public:
    ProfilingHal(std::unique_ptr<IHalOps> realImpl) : impl(std::move(realImpl)) {}

    int add(int a, int b) override {
        auto start = std::chrono::high_resolution_clock::now();
        int result = impl->add(a, b);
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "[Profile] add() took "
                  << std::chrono::duration<double, std::micro>(end - start).count()
                  << " µs\n";
        return result;
    }

    int mul(int a, int b) override {
        auto start = std::chrono::high_resolution_clock::now();
        int result = impl->mul(a, b);
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "[Profile] mul() took "
                  << std::chrono::duration<double, std::micro>(end - start).count()
                  << " µs\n";
        return result;
    }

    float convert(int a) override {
        auto start = std::chrono::high_resolution_clock::now();
        float result = impl->convert(a);
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "[Profile] convert() took "
                  << std::chrono::duration<double, std::micro>(end - start).count()
                  << " µs\n";
        return result;
    }
};

// ---------------- Factory ----------------
enum class DeviceType {
    CPU,
    GPU
};

DeviceType detectDevice(int argc, char** argv) {
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--cpu") return DeviceType::CPU;
        if (arg == "--gpu") return DeviceType::GPU;
    }
    return DeviceType::CPU; // Default fallback
}

std::unique_ptr<IHalOps> createHalInstance(DeviceType device) {
    std::unique_ptr<IHalOps> impl;

    if (device == DeviceType::GPU) {
        impl = std::make_unique<GpuHal>();
        std::cout << "[Info] Using GPU HAL\n";
    } else {
        impl = std::make_unique<CpuHal>();
        std::cout << "[Info] Using CPU HAL\n";
    }

    return std::make_unique<ProfilingHal>(std::move(impl));
}

// ---------------- Unit Test ----------------
void runTests(IHalOps* hal) {
    std::cout << "\n[Testing HAL Functions]\n";
    assert(hal->add(2, 3) == 5);
    assert(hal->mul(2, 4) == 8);
    assert(hal->convert(10) == 10.0f);
    std::cout << "[Success] All unit tests passed.\n\n";
}

// ---------------- Main ----------------
int main(int argc, char** argv) {
    DeviceType device = detectDevice(argc, argv);
    auto hal = createHalInstance(device);

    runTests(hal.get());

    std::cout << "Add: " << hal->add(3, 4) << "\n";
    std::cout << "Mul: " << hal->mul(3, 4) << "\n";
    std::cout << "Convert: " << hal->convert(10) << "\n";

    return 0;
}
