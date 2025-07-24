from math import gcd
import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0
t = inp[ii]; ii += 1
for _ in range(t):
    n = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n

    gcd1 = a[0]
    for i in range(0, n, 2):
        gcd1 = gcd(gcd1, a[i])

    gcd2 = a[1] if n > 1 else 0
    for i in range(1, n, 2):
        gcd2 = gcd(gcd2, a[i])

    valid1 = all(a[i] % gcd1 != 0 for i in range(1, n, 2))
    valid2 = all(a[i] % gcd2 != 0 for i in range(0, n, 2))

    if valid1:
        print(gcd1)
    elif valid2:
        print(gcd2)
    else:
        print(0)
