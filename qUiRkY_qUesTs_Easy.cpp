#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// Function to calculate MEX
int calculateMEX(const vector<int>& A) {
    set<int> present(A.begin(), A.end());
    int mex = 0;
    while (present.count(mex)) {
        ++mex;
    }
    return mex;
}

// Function to compute f(A)
int computeF(const vector<int>& A) {
    int mex = calculateMEX(A);

    // Calculate sum of [0, 1, ..., mex-1]
    int mexSum = (mex * (mex - 1)) / 2;

    // Add all elements >= mex
    int remainingSum = 0;
    for (int x : A) {
        if (x >= mex) {
            remainingSum += x;
        }
    }

    return mexSum + remainingSum;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Length of array
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        cout << computeF(A) << endl; // Output result for each test case
    }

    return 0;
}
