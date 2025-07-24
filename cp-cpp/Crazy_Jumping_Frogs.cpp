#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxFrogsInBucket(vector<int>& A) {
    int N = A.size();
    int maxFrogs = 1;

    for (int t = 0; t < N; t++) {
        for (int i = 0; i < N; i++) {
            int j = (i + 1) % N;
            while (A[i] == A[j]) {
                j = (j + 1) % N;
            }
            if (A[i] < A[j]) {
                A[i]--;
            } else {
                A[i]++;
            }
        }
        int currentMax = 0;
        for (int k = 1; k <= 2 * N; k++) {
            currentMax = max(currentMax, count(A.begin(), A.end(), k));
        }
        maxFrogs = max(maxFrogs, currentMax);
    }
    return maxFrogs;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << maxFrogsInBucket(A) << endl;
    }
    return 0;
}