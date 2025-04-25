#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<ll, ll> freq;
        vector<ll> a(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        int ans = 0;
        int z = freq[0];
        
        for (auto it = freq.begin(); it != freq.end(); it++) {
            pair<ll, ll> p = *it;
            int num = p.first;
            int ct = p.second;

            if (ct % 2 == 0 && ct >= 2) {
                z++;
            }
            else if (ct % 2 == 1 && ct >= 3) {
                ans += 1;
                z++;
            }
            else if (ct == 1 && num != 0) {
                ans += 1;
            }
        }
        
        if (z) {
            ans = ans + 1;
        }

        cout << ans << endl;
    }
    return 0;
}
