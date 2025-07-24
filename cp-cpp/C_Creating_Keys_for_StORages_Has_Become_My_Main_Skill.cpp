#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;
        
        ll curr = 0;
        vi a;
        
        // Pick numbers from 0 to x-1 while maintaining OR condition
        for (int i = 0; i <= x; i++) {
            if ((curr | i) > x) continue; // Ensure we do not exceed x
            a.push_back(i);
            curr |= i;
            if (curr == x) break;
        }

        // If the array is too short, fill remaining slots with smallest numbers not in 'a'
        int next = 0;
        unordered_set<int> used(a.begin(), a.end());
        while (a.size() < n) {
            while (used.count(next)) next++;
            a.push_back(next);
            used.insert(next);
        }

        // Print result
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
