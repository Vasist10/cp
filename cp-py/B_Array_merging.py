import sys
from collections import defaultdict

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1

    a = inp[ii: ii + n]; ii += n
    b = inp[ii: ii + n]; ii += n

    streak_a = defaultdict(int)
    streak_b = defaultdict(int)

    i = 0
    while i < n:
        val = a[i]
        count = 1
        while i + 1 < n and a[i+1] == val:
            i += 1
            count += 1
        streak_a[val] = max(streak_a[val], count)
        i += 1

    i = 0
    while i < n:
        val = b[i]
        count = 1
        while i + 1 < n and b[i+1] == val:
            i += 1
            count += 1
        streak_b[val] = max(streak_b[val], count)
        i += 1

    all_vals = set(streak_a) | set(streak_b)
    max_streak = 0
    for val in all_vals:
        total = streak_a[val] + streak_b[val]
        max_streak = max(max_streak, total)

    print(max_streak)
