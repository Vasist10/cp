t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    ans = ['0'] * n
    
    min_left = a[0]
    for i in range(n):
        if a[i] <= min_left:
            ans[i] = '1'
            min_left = a[i]
        else:
            break
    
    max_right = a[-1]
    for i in range(n-1, -1, -1):
        if a[i] >= max_right:
            ans[i] = '1'
            max_right = a[i]
        else:
            break
    
    print(''.join(ans))
