import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1

    a = inp[ii: ii + n]; ii += n
    ad = inp[ii: ii + n]; ii += n
    
    if ad == sorted(ad):
        print(1 , n)
    else:
        l = 0
        r = n - 1
        while l < n and a[l] == ad[l]:
            l += 1
        while r >= 0 and a[r] == ad[r] :
            r -= 1
            
            
        while l > 0 and ad[l - 1] <= ad[l]:
            l -= 1
        while r < n - 1 and ad[r + 1] >= ad[r]:
            r += 1
        print(l + 1, r + 1)
        