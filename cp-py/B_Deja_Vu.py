import sys
from collections import defaultdict

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    q = inp[ii]; ii += 1

    a = inp[ii: ii + n]; ii += n
    x = inp[ii: ii + q]; ii += q
    
    freq = defaultdict(int)
    for val in x:
        freq[val] += 1
    
    for i in (freq):
        for j in range(n):
            if a[j]% (2**i)==0:
                a[j]+=2**(i-1)
    print(*a)
        