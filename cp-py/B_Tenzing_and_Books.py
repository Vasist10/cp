t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    s = 0
    for _ in range(3):
        a = list(map(int, input().split()))
        for num in a:
            if (x | num) != x:
                break
            s |= num
    print("Yes" if s == x else "No")
