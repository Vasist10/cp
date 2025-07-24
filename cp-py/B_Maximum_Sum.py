import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    k = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n
    tot = sum(a)

    a.sort()
    ans =0
    pr = [0]*(n+1)
    for i in range(n):
        pr[i+1] = pr[i]+a[i]
    for i in range(k+1):
        ans = max(ans,pr[n-(k-i)] - pr[2*i])
    print(ans)
