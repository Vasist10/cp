import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    px = inp[ii]; ii += 1
    py = inp[ii]; ii += 1
    qx = inp[ii]; ii += 1
    qy = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n
    sum_a = sum(a)
    max_a = max(a) if a else 0

    dx = px - qx
    dy = py - qy
    d = dx * dx + dy * dy

    rmx = sum_a

    if n == 0:
        rmn = 0
    else:
        tot_a = sum_a - max_a
        rmn = max(0, max_a - tot_a)

    rmin = rmn * rmn
    rmax = rmx * rmx

    if rmin <= d <= rmax:
        print("Yes")
    else:
        print("No")


