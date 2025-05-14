# scripts/generate_bbv.py

import re
from collections import defaultdict

TRACE_PATH = "../traces/trace.out"
BBV_OUT = "../simpoint_output/bbv.txt"
INTERVAL = 100000  

def parse_trace(trace_path):
    with open(trace_path, 'r') as f:
        lines = f.readlines()
    return [line.strip() for line in lines if re.match(r'0x[0-9a-f]+', line)]

def build_bbv(instrs):
    bbv = []
    counter = defaultdict(int)
    total = 0
    interval_id = 0

    for pc in instrs:
        counter[pc] += 1  #incre ax1
        total += 1
        if total >= INTERVAL:
            vec = " ".join([f"{k}:{v}" for k, v in sorted(counter.items())])
            bbv.append(f"{interval_id} {vec}")
            counter = defaultdict(int)
            total = 0
            interval_id += 1

    
    if total > 0:
        vec = " ".join([f"{k}:{v}" for k, v in sorted(counter.items())])
        bbv.append(f"{interval_id} {vec}")

    return bbv

def main():
    instrs = parse_trace(TRACE_PATH)
    bbv = build_bbv(instrs)
    with open(BBV_OUT, 'w') as f:
        for line in bbv:
            f.write(line + "\n")
    print(f"[✓] BBV file written to {BBV_OUT}")

if __name__ == "__main__":
    main()
