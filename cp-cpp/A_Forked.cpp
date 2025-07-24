#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<long long> vll;

// Macros
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) (v).begin(), (v).end()
#define vecin(vec) for(auto &i:(vec)) cin>>i;
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
        // vasist
        int a, b;
                int x1, y1, x2, y2;
                cin >> a >> b >> x1 >> y1 >> x2 >> y2;
                set<pair<int, int>> s;
                s.insert({x1 + a, y1 + b});
                s.insert({x1 - a, y1 + b});
                s.insert({x1 + a, y1 - b});
                s.insert({x1 - a, y1 - b});
                s.insert({x1 + b, y1 + a});
                s.insert({x1 - b, y1 + a});
                s.insert({x1 + b, y1 - a});
                s.insert({x1 - b, y1 - a});
                int ans = 0;
                set<pair<int, int>> s2;
                s2.insert({x2 + a, y2 + b});
                s2.insert({x2 - a, y2 + b});
                s2.insert({x2 + a, y2 - b});
                s2.insert({x2 - a, y2 - b});
                s2.insert({x2 + b, y2 + a});
                s2.insert({x2 - b, y2 + a});
                s2.insert({x2 + b, y2 - a});
                s2.insert({x2 - b, y2 - a});
 
                for (auto u : s2) if (s.find(u) != s.end()) ans++;
                cout << ans << "\n";
    }
    return 0;
}