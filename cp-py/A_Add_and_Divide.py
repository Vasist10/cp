import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0


t = inp[ii]; ii += 1

for _ in range(t):
    
    a = inp[ii]; ii += 1
    b = inp[ii]; ii += 1
    ans = INT_MAX = 10**9 + 7
    for add in range(0,32):
        op = add
        nb = b + add
        if nb == 1:
            continue
        copy_a = a
        while copy_a > 0:
            copy_a//=nb
            op += 1
        ans = min(ans, op)
    print(ans)