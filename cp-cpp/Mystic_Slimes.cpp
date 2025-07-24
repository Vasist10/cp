#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the maximum possible power of the last remaining slime
long long maxSlimePower(vector<int>& A) {
    if (A.size() == 1) return A[0];

    int maxElement = *max_element(A.begin(), A.end());
    long long totalSum = 0;

    for (int num : A) {
        totalSum += num;
    }

    // The maximum possible power will be the maximum of (total sum - largest element) or the largest element itself
    return max(0LL, totalSum - maxElement);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Size of the array

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        cout << maxSlimePower(A) << "\n";
    }

    return 0;
}
