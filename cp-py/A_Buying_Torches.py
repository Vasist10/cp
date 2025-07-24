import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    x = inp[ii]; ii += 1
    y = inp[ii]; ii += 1
    k = inp[ii]; ii += 1
    s = y*k + k -1
    b =  x-1
    ans = (s+b-1)//b
    print(ans + k)