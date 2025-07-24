import sys

inp = sys.stdin.read().splitlines()
ii = 0

t = int(inp[ii]); ii += 1

for _ in range(t):
    w, h = map(int, inp[ii].split()); ii += 1
    ans = 0
    for i in range(4):
        a = [int(x) for x in inp[ii].split()][1:]
        ii += 1
        ans = max(ans, (a[-1] - a[0]) * (h if i < 2 else w))
    print(ans)
