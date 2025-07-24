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
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        // vasist
        int n, k;
        cin >> n >> k;
        vi a(n);
        vecin(a);
        vector<pair<ll,ll>> b(n);
        for(int i=0;i<n;i++){
            b[i] = {a[i]-k,a[i]+k};
        }
        ll ans = 0;
        ll l=b[0].F;
        ll r=b[0].S;
        for(int i=1;i<n;i++){
            l=max(l,b[i].F);
            r=min(r,b[i].S);
            if(l>r){
                ans++;
                l=b[i].F;
                r=b[i].S;
            }
        }
        cout << ans<< "\n";
    }
    return 0;
}