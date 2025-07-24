#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort the array
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        // 2D DP matrix where dp[i][j] means how many elements can be removed
        // if we start with sorted_a[i] and consider removing elements up to sorted_a[j]
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Fill the dp matrix
        for (int i = 0; i < n; i++) {
            int score = sorted_a[i];
            for (int j = i + 1; j < n; j++) {
                if (score >= sorted_a[j]) {
                    dp[i][j] = dp[i][j - 1] + 1;
                    score += sorted_a[j];
                } else {
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }

        // Output the result
        for (int i = 0; i < n; i++) {
            int score = a[i];
            int index = lower_bound(sorted_a.begin(), sorted_a.end(), score) - sorted_a.begin();
            cout << dp[index][n - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}
