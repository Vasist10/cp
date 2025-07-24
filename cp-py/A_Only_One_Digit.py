import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    
    ans = float('inf')
    
    while n>0:
        ans = min(ans,n%10)
        n = n//10
    print(ans)

