t = int(input())

for _ in range(t):
    n, l, r, k = map(int, input().split())

    if n == 1:
        print(l)
    elif n % 2 == 1:
        if k <= n:
            print(l)
        else:
            print("-1")
    else:
        if n == 2:
            print("-1")
        else:
            x = l
            while True:
                ok = True
                for i in range(64):
                    bit = 1 << i
                    if (l & bit) and (x & bit):
                        x += bit
                        x &= ~(bit - 1)
                        ok = False
                        break
                if ok:
                    break
            if x > r:
                print("-1")
            else:
                if k <= n - 2:
                    print(l)
                else:
                    print(x)
    