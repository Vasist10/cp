import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    x = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii +=n
    
    ones = [i for i in range(n) if a[i] == 1]

    if not ones:
        print("YES")  
        continue
    r = max(ones)
    l = min(ones)
    if r - l + 1 <= x:
        print("YES")
    else:
        print("NO")
        
    
    
    
