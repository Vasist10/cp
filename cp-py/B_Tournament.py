t = int(input())
for _ in range(t):
    n, j, k = map(int, input().split())
    a = list(map(int, input().split()))
    aj = a[j - 1]
    s = sorted(set(a), reverse=True)
    kstr = s[:k]
    if aj in kstr:
        print("YES") 
    else:
        print("NO")    