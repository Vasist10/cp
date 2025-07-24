import numpy as np
import matplotlib.pyplot as plt
import math 
def combination(n, r):
    """Calculate combination C(n, r)."""
    return math.factorial(n) / (math.factorial(r) * math.factorial(n - r))
def calculate_mean(data):
    """Calculate mean of the data."""
    return sum(data) / len(data)
def calculate_variance(data, mean):
    """Calculate variance of the data."""
    return sum((x - mean) ** 2 for x in data) / len(data)
def calculate_fourth_moment(data, mean):
    """Calculate the fourth moment about the mean."""
    return sum((x - mean) ** 4 for x in data) / len(data)
# Input parameters
n = 1000
p = 0.5
lambda_ = 0.7
num_samples = 100

# Generate Binomial data
binomial_data = []
for _ in range(num_samples):
    successes = sum(np.random.rand(n) < p)
    binomial_data.append(successes)

# Generate Poisson data
poisson_data = []
for _ in range(num_samples):
    arrivals = 0
    time = 0
    while time < 1:
        time += np.random.exponential(1 / lambda_)
        if time < 1:
            arrivals += 1
    poisson_data.append(arrivals)

# Calculate statistics for Binomial distribution
binomial_mean = calculate_mean(binomial_data)
binomial_variance = calculate_variance(binomial_data, binomial_mean)
binomial_fourth_moment = calculate_fourth_moment(binomial_data, binomial_mean)

# Calculate statistics for Poisson distribution
poisson_mean = calculate_mean(poisson_data)
poisson_variance = calculate_variance(poisson_data, poisson_mean)
poisson_fourth_moment = calculate_fourth_moment(poisson_data, poisson_mean)

# MGF calculations
t_vals = np.linspace(-1, 1, 100)
mgf_binomial_vals = [
    sum(combination(n, k) * (p * np.exp(t)) ** k * (1 - p) ** (n - k) for k in range(n + 1))
    for t in t_vals
]
mgf_poisson_vals = [np.exp(lambda_ * (np.exp(t) - 1)) for t in t_vals]

# Plot histograms and MGFs
fig, axs = plt.subplots(2, 2, figsize=(12, 10))

# Binomial Distribution Graph
axs[0, 0].hist(binomial_data, bins=20, density=True, color='blue', alpha=0.7, edgecolor='black')
axs[0, 0].set_title(f'Binomial Distribution\nMean: {binomial_mean:.2f}, Variance: {binomial_variance:.2f}')
axs[0, 0].set_xlabel('Value')
axs[0, 0].set_ylabel('Probability Density')

# Poisson Distribution Graph
axs[0, 1].hist(poisson_data, bins=20, density=True, color='green', alpha=0.7, edgecolor='black')
axs[0, 1].set_title(f'Poisson Distribution\nMean: {poisson_mean:.2f}, Variance: {poisson_variance:.2f}')
axs[0, 1].set_xlabel('Value')
axs[0, 1].set_ylabel('Probability Density')

# MGF of Binomial
axs[1, 0].plot(t_vals, mgf_binomial_vals, label='MGF (Binomial)', color='blue')
axs[1, 0].set_title('MGF of Binomial Distribution')
axs[1, 0].set_xlabel('t')
axs[1, 0].set_ylabel('MGF')

# MGF of Poisson
axs[1, 1].plot(t_vals, mgf_poisson_vals, label='MGF (Poisson)', color='green')
axs[1, 1].set_title('MGF of Poisson Distribution')
axs[1, 1].set_xlabel('t')
axs[1, 1].set_ylabel('MGF')

plt.tight_layout()
plt.show()

# Print results
print(f"Binomial Mean: {binomial_mean}, Variance: {binomial_variance}, Fourth Moment: {binomial_fourth_moment}")
print(f"Poisson Mean: {poisson_mean}, Variance: {poisson_variance}, Fourth Moment: {poisson_fourth_moment}")
