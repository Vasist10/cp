def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    curr = a[k - 1]
    a.sort()

    # Find index of current element in the sorted array
    idx = a.index(curr)
    
    # Try to greedily collect smaller values first
    for i in range(idx + 1, n):
        if a[i] > curr:
            diff = a[i] - curr
            if diff > curr:
                print("No")
                return
        curr += a[i]  # absorb the value

    print("Yes")

# Multi-test
t = int(input())
for _ in range(t):
    solve()
