def calculate_mex(arr):
    """Calculate the MEX (Minimum Excludant) of an array."""
    present = set(arr)
    mex = 0
    while mex in present:
        mex += 1
    return mex

def compute_f(arr):
    """Compute the maximum possible sum f(A) for the given array A."""
    mex = calculate_mex(arr)

    # Calculate the sum of [0, 1, ..., mex-1]
    mex_sum = (mex * (mex - 1)) // 2

    # Add all elements >= mex
    remaining_sum = sum(x for x in arr if x >= mex)

    return mex_sum + remaining_sum

def main():
    T = int(input())  # Number of test cases
    results = []

    for _ in range(T):
        N = int(input())  # Length of array
        A = list(map(int, input().split()))  # Read the array elements

        result = compute_f(A)
        results.append(result)

    for res in results:
        print(res)  # Output result for each test case

if __name__ == "__main__":
    main()
