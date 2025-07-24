import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1

    while True:
        temp = n
        ok = True
        while temp > 0:
            d = temp % 10
            if d == 0:
                d = 1
            if n % d != 0:
                ok = False
                break
            temp //= 10
        if ok:
            print(n)
            break
        n += 1
