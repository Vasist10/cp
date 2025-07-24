import sys
input = sys.stdin.read
inp = list(map(int, input().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n

    prefix_l = [0] * (n + 1)  
    prefix_r = [0] * (n + 1)  

    for i in range(n):
        prefix_l[i + 1] = prefix_l[i] + a[i]

    for i in range(n-1,-1,-1):
        prefix_r[n-i] = prefix_r[n-i-1] + a[i]

    l = 0
    r = 0
    ans = 0

    while l <= n and r <= n:
        if prefix_l[l] == prefix_r[r] and l + r <= n:
            ans = max(ans, l + r)
            l += 1
            r += 1
        elif prefix_l[l] < prefix_r[r]:
            l += 1
        else:
            r += 1

    print(ans)
