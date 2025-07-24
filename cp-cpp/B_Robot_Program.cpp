#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        ll k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        // Compute prefix sums
        vector<int> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + (s[i - 1] == 'L' ? -1 : 1);
        }

        // First cycle: find first reset time
        int first_reset = -1;
        for (int i = 1; i <= n; i++) {
            if (x + prefix[i] == 0) {
                first_reset = i;
                break;
            }
        }

        // If the robot never reaches 0 in the first cycle or doesn't have enough time:
        if (first_reset == -1 || first_reset > k) {
            cout << "0\n";
            continue;
        }

        ll resets = 1; // First reset counted
        ll time_used = first_reset;

        // Find the smallest `j` such that `prefix[j] == 0` (cycle length)
        int t0 = -1;
        for (int j = 1; j <= n; j++) {
            if (prefix[j] == 0) {
                t0 = j;
                break;
            }
        }

        if (t0 == -1) {
            // The cycle never resets to 0 again
            cout << resets << '\n';
            continue;
        }

        // Additional full cycles
        resets += (k - time_used) / t0;
        cout << resets << '\n';
    }
}

int main() {
    solve();
    return 0;
}
