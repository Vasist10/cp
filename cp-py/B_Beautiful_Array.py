t = int(input())
for _ in range(t):
    n,k,b,s = map(int, input().split())
    res =[0]*n
    if k*b <= s <= (k -1) * n + k *b:
        res[0] =k*b
        snew = s-k*b
        for i in range(n):
            add = min(snew,k-1)
            res[i]+= add
            snew=snew-add  
        print(*res)    
    else: 
        print(-1)
        
#ran successfully on cf
        