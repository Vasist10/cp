import sys
from itertools import accumulate

input = sys.stdin.read
data = list(map(int, input().split()))
ii = 0

t = data[ii]; ii += 1

for _ in range(t):
    n = data[ii]; ii += 1
    A = data[ii: ii + n]; ii += n

    X = sorted(A)
    Xc = [0] + list(accumulate(X))  

    dp = [0] * (n + 1)
    dp[n] = n
    for i in range(n - 1, -1, -1):
        if X[i] > Xc[i]:
            dp[i] = i
        else:
            dp[i] = dp[i + 1]

    mp = dict()
    for i in range(n):
        mp[X[i]] = dp[i + 1] - 1

    res = [mp[val] for val in A]
    print(*res)
