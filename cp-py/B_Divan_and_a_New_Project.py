import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n

    buildings = sorted([(ai, i + 1) for i, ai in enumerate(a)], reverse=True)

    ans = 0
    ct = 2
    score = 1
    a.sort(reverse=True)
    for i in a:
        if ct > 0:
            ans += i * score
            ct -= 1
        elif ct == 0:
            score += 1
            ans += i * score
            ct = 1

    print(ans * 2)

    coord_map = [0] * (n + 1)
    k = 1
    ct2 = 2
    left = True
    for visits, idx in buildings:
        if ct2 > 0:
            ct2 -= 1
        else:
            k += 1
            ct2 = 1
        if left:
            coord_map[idx] = -k
        else:
            coord_map[idx] = k
        left = not left

    print(*coord_map)
