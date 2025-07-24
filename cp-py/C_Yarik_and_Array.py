import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n
    
    ans=max(a)
    curr=0
    prev =None
    for i in a:
        parity = abs(i) % 2 
        if (prev is None or prev!=parity):
            curr+=i
        else:
            curr = i
        if curr < i:
            curr = i
        ans = max(ans,curr) 
        prev = parity
    
    print(ans)