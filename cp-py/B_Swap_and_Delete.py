import sys

inp = sys.stdin.read().split()
ii = 0  

t = int(inp[ii]); ii += 1

for _ in range(t):
    s = inp[ii]; ii += 1
    n = len(s)
    z = s.count('0')
    o = n - z
    ans = 0
    for ch in s:
        if ch == '0':
            o -= 1
        else:   
            z -= 1
        if o >= 0 and z >= 0:
            ans += 1
    print(n - ans)