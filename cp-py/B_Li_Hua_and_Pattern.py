# import sys

# inp = list(map(int, sys.stdin.read().split()))
# ii = 0

# t = inp[ii]; ii += 1

# for _ in range(t):
#     n = inp[ii]; ii += 1
#     x = inp[ii]; ii += 1
    
    
#     grid = []
#     for _ in range(n):
#         row = inp[ii: ii + n]
#         ii += n
#         grid.append(row)
    
#     ct = 0
#     for i in range(n):
#         for j in range(n):
#             ni, nj = n-1-i, n-1-j
#             if (i<ni) or (i==ni and j<nj):
#                 if grid[i][j]!=grid[ni][nj]:
#                     ct += 1

#     if x < ct:
#         print("NO")
#     elif n % 2 == 0:
#         print("YES" if (x - ct) % 2 == 0 else "NO")
#     else:
#         print("YES")    


import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    x = inp[ii]; ii += 1

    grid = []
    for _ in range(n):
        row = inp[ii: ii + n]
        ii += n
        grid.append(row)
    grid2 = [row[::-1] for row in grid[::-1]]

    ct = 0
    for i in range(n):
        for j in range(n):
            if grid[i][j] != grid2[i][j]:
                ct += 1

    ct //= 2  

    if x < ct:
        print("NO")
    elif n % 2 == 0:
        print("YES" if (x - ct) % 2 == 0 else "NO")
    else:
        print("YES")

    