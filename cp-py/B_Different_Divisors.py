import sys
import math

inp = list(map(int, sys.stdin.read().split()))
ii = 0

t = inp[ii]; ii += 1

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def next_prime(n):
    if n <= 1:
        return 2
    while True:
        if is_prime(n):
            return n
        n += 1

for _ in range(t):
    d = inp[ii]; ii += 1
    
    p = next_prime(d+1)
    q = next_prime(d+p)
    print(min(p*p*p , p*q))
        