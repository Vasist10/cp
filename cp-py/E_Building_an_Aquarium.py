import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    x = inp[ii]; ii += 1
    
    a = inp[ii: ii + n]; ii += n
    a = sorted(a)
    tot = 0
    
    for i in a:
        tot+=i
    req = tot//n
    
  
            