t = int(input())
for _ in range(t):
    n = int(input())
    cnt = [0, 0, 0, 0]
    for i in range(n):
        cnt[i % 4] += 1

    rounds = min(cnt[0], cnt[3]) + min(cnt[1], cnt[2])
    if rounds * 2 == n:
        print("Bob")
    else:
        print("Alice")
