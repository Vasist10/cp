import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]
ii += 1

for _ in range(t):
    n = inp[ii]
    m = inp[ii + 1]
    ii += 2

    grid = []
    for _ in range(n):
        row = inp[ii: ii + m]
        grid.append(row)
        ii += m

    neg = 0
    least = float('inf')
    total_sum = 0  

    for i in range(n):
        for j in range(m):
            val = grid[i][j]
            if val < 0:
                neg += 1
            least = min(least, abs(val))
            total_sum += abs(val)

    if neg % 2 == 0:
        print(total_sum)
    else:
        print(total_sum - 2 * least)
