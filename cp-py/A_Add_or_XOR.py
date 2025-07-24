def sol(a, b, x, y):
    dp = [float('inf')] * 101
    dp[a] = 0

    for i in range(101):
        if dp[i] == float('inf'):
            continue

        if i + 1 <= 100:
            dp[i + 1] = min(dp[i + 1], dp[i] + x)

        xor_val = i ^ 1
        if xor_val <= 100:
            dp[xor_val] = min(dp[xor_val], dp[i] + y)

    return dp[b] if dp[b] != float('inf') else -1

t = int(input())
for _ in range(t):
    a, b, x, y = map(int, input().split())
    print(sol(a, b, x, y))
