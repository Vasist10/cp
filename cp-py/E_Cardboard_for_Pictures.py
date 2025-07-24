import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    c = inp[ii]; ii += 1

    a = inp[ii: ii + n]; ii += n
    sum_a = sum(a)
    sum_a2 = sum(x * x for x in a)
    
    l=1
    r=int(1e9)
    while(l<=r):
        mid = (r+l)//2
        sumall=0
        sumall = sum_a2 + 4 * mid * sum_a + 4 * mid * mid * n
        if sumall ==c:
            print(mid)
            break
        if sumall>c:
            r = mid-1
        else:
            l = mid+1