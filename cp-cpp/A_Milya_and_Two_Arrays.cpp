#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

// Macros
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define F first
#define S second   

// Constants
const int MOD = 1e9+7;
const ll INF = 1e18;

// Utility Functions
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// Main Function
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        
        vector<int> a(n),b(n);
        for (int i=0;i<n;i++) cin>>a[i];
        
        for (int i=0;i<n;i++) cin>>b[i];
        

        set<int> sums;

        for (int i=0;i<n;i++) {
            for (int j=0;j<n;++j) {
                sums.insert(a[i]+b[j]);
                if (sums.size()>= 3) break; 
            }
            if (sums.size()>=3) break;
        }
        cout <<(sums.size()>=3?"YES":"NO")<<'\n';
     
}
}


#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        // Sorting to ensure better pairing strategy
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend()); // Sort in descending order for more variety

        set<int> distinct_sums;

        // Collect distinct sums from first `n` elements only
        for (int i = 0; i < n && distinct_sums.size() < 3; ++i) {
            distinct_sums.insert(a[i] + b[i]);
        }

        // Output result
        cout << (distinct_sums.size() >= 3 ? "YES" : "NO") << endl;
    }
    return 0;
}
