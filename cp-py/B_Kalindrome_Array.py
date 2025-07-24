import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1

    a = inp[ii: ii + n]; ii += n
    s = ''.join(map(str,a))
        
    p = s[::-1]        
    n = len(s)
    m = len(p)
    dp = [[0 for i in range(m+1)] for _ in range(n+1)]
            
    for i in range(1,n+1):
        for j in range(1,m+1):
            if s[i-1] == p[j-1]:               
                dp[i][j] = 1+dp[i-1][j-1]
            else:
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])                    
    
    if dp[n][m] == 1:
        print("NO")
    else:
        print("YES")