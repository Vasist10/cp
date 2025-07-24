import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1

    a = inp[ii: ii + n]; ii += n
    neg = 0
    for i in range(n):
        if a[i] < 0:
            neg+=1
    tot = sum(abs(x) for x in a)
    if neg%2==0:
        print(tot)
    else:
        print(tot-2*min(abs(x) for x in a))