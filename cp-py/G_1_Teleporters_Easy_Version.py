import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    c = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n
    cost = []
    for i in range(n):
        cost.append(a[i] + i + 1)   
    cost.sort()
    ans = 0
    for x in cost:
        if x > c:
            break
        c -= x
        ans += 1
    print(ans)
