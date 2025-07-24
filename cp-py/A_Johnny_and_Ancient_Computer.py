import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    a = inp[ii]; ii += 1
    b = inp[ii]; ii += 1
    
    ans = 0
    if max(a, b)%min(a, b)!=0:
        print(-1)
        continue
    while a!=b:
        changed = False
        if a > b:
            if a % 8==0 and a//8 >=b:
                a //= 8
                ans += 1
                changed = True
            elif a % 4==0 and a//4 >=b:
                a //= 4
                ans += 1
                changed = True
            elif a % 2==0 and a//2 >=b:
                a //= 2
                ans += 1
                changed = True
        else :
            if a * 8 <= b:
                a *= 8
                ans += 1
                changed = True
            elif a * 4 <= b:
                a *= 4
                ans += 1
                changed = True
            elif a * 2 <= b:
                a *= 2
                ans += 1
                changed = True
        if not changed:
            ans = -1
            break
            
    print(ans)
            
            
    