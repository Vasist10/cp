#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_sum = a[0];  // We start with the first element
        int sum = a[0];  // Initialize the sum of the current alternating subarray
        
        // Iterate over the array starting from the second element
        for (int i = 1; i < n; i++) {
            if ((a[i] % 2) != (a[i - 1] % 2)) {
                // If alternating parity, add to the sum
                sum += a[i];
            } else {
                // If same parity, reset the sum and start a new subarray
                sum = a[i];
            }

            // Track the maximum sum found so far
            max_sum = max(max_sum, sum);
        }

        // Output the result for this test case
        cout << max_sum << endl;
    }
    return 0;
}
