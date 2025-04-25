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
#define rall(v) (v).rbegin(), (v).rend()
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
void solve() {
    int n, m;
    cin >> n >> m;  
    vector<vector<int>> mat(n, vector<int>(m));
    vector<int> rxor(n, 0), cxor(m, 0);
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            char c;
            cin >> c;
            mat[i][j] = c-'0';
            rxor[i]^=mat[i][j];
            cxor[j]^=mat[i][j];
        }
    }
    int rf=0,cf=0;
    for (int i=0;i<n;++i) {
        if (rxor[i] != 0) {
            rf++;
        }
    }
    for (int j=0;j<m;++j) {
        if (cxor[j] != 0) {
            cf++;
        }
    }
    cout<<max(rf, cf)<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
