import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

def lcm(a, b)->int :
    from math import gcd
    return (a * b) // gcd(a, b)

for _ in range(t):
    n = int(inp[ii]); ii += 1

    for i in range(2, n):
        a = i
        b = n - i
        lm = max(a, b)
        if lm == lcm(a, b):
            print(a, b)
        break
