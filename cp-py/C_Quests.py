import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    k = inp[ii]; ii += 1
    a = inp[ii:ii+n];ii+=n
    b = inp[ii:ii+n];ii+=n
    sum = 0
    mx = 0
    res = 0
    for i in range(min(n,k)):
        sum+=a[i]
        mx = max(mx,b[i])
        res = max(res,sum+mx*(k-i-1))
    print(res)
    
    