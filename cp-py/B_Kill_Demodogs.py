import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1

    ans = ((n*(n+1)*(4*n-1)) // 6 ) *2022 
    print(ans%1000000007)