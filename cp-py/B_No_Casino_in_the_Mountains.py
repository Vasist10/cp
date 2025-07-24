import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    k = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n
    ans = 0
    ze = 0
    i = 0
    while i < n:
        if a[i] == 0:
            ze += 1
        else:
            ze = 0
        if ze == k:
            ans += 1
            ze = 0
            i += 1  
        i += 1
    print(ans)