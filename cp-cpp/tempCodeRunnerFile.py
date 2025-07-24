#binomial prob dist func
def factorial(n):
 if n == 0 or n == 1:
    return 1
 else:
    return n * factorial(n - 1)
# Binomial PMF
def binomial_pmf(n, k, p):
 nCk = factorial(n) / (factorial(k) * factorial(n - k))
 probability = nCk * (p ** k) * ((1 - p) ** (n - k))
 return probability
# Example 1
n = 14 
p = 0.6
k = 4 
print(binomial_pmf(n, k, p))

# Poision prob dist func
def exp_approx(x, terms=20):
 result = 0

 for i in range(terms):
    result += (x ** i) / factorial(i)
 return result
# Poisson PMF
def poisson_pmf(lam, k):
    probability = (lam ** k) * exp_approx(-lam) / factorial(k)
    return probability
# Example 2
lam = 2 # avg rate
k = 6 # tot events
print(poisson_pmf(lam, k))

# Normal prob dist func
def normal_pdf(x, mu, sigma):
 part1 = 1 / (sigma * (2 * 3.14159) ** 0.5)
 exponent = -((x - mu) ** 2) / (2 * (sigma ** 2))
 part2 = exp_approx(exponent)
 probability_density = part1 * part2
 return probability_density
# Example 3
mu = 1.3 
sigma = 1.35 
x = 1.52 
print(normal_pdf(x, mu, sigma))
