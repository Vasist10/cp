import sys

lines = sys.stdin.readlines()
ii = 0

t = int(lines[ii].strip()); ii += 1

for _ in range(t):
    n = int(lines[ii].strip()); ii += 1
    s = lines[ii].strip(); ii += 1

    ans = 0
    bal = 0

    for ch in s:
        if ch == '(':
            bal += 1
        else:
            bal -= 1
            if bal < 0:
                ans += 1
                bal = 0
    print(ans)
