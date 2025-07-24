import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1

    a = inp[ii: ii + n]; ii += n
    
    if len( a) != len(set(a)):
        print("YES")
    else:   
        print("NO")