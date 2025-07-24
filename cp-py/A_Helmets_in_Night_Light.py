import sys

inp = list(map(int, sys.stdin.read().split()))
ii = 0  
t = inp[ii]; ii += 1

for _ in range(t):
    n = inp[ii]; ii += 1
    p = inp[ii]; ii += 1
    a = inp[ii: ii + n]; ii += n
    b = inp[ii: ii + n]; ii += n
    c = sorted(zip(b, a))  

    min_cost = p
    shared = 1

    for cost, can_share in c:
        if cost >= p:
            break
        if shared + can_share > n:
            min_cost += (n - shared) * cost
            shared = n
            break
        else:
            min_cost += can_share * cost
            shared += can_share

    min_cost += (n - shared) * p
    print(min_cost)
