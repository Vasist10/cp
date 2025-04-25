#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to calculate the sum of the segment [l, r]
long long segmentSum(const vector<int>& a, int l, int r) {
    long long sum = 0;
    for (int i = l; i <= r; i++) {
        sum += a[i];
    }
    return sum;
}

// Function to find the minimum value of the sum after reversing any subsequence
long long findMinSum(const vector<int>& a, int l, int r) {
    long long originalSum = segmentSum(a, l, r);

    // Find the maximum subsequence sum in the range [l, r]
    long long maxSubsequenceSum = 0, currentSum = 0;
    for (int i = l; i <= r; i++) {
        currentSum = max(0LL, currentSum + a[i]);
        maxSubsequenceSum = max(maxSubsequenceSum, currentSum);
    }

    // Subtract twice the maximum subsequence sum from the original sum
    return originalSum - 2 * maxSubsequenceSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // Adjust l and r to 0-based indexing
        l--, r--;

        cout << findMinSum(a, l, r) << endl;
    }

    return 0;
}
