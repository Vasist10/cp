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
       int n;
       cin>>n;
       vll a(n);
       vecin(a);
       vll p(n+1,0),s(n+1,0);
       for(int i=0;i<n;i++){
            p[i+1]=p[i]+(a[i]>0 ? a[i]:0);
       }
       for(int i=n-1;i>=0;i--){
            s[i]=s[i+1]-(a[i]<0 ? a[i]:0);
       }
       ll ans=0;
       for(int i=0;i<n+1;i++){
           ans = max(ans,p[i]+s[i]);
       }
       cout<<ans<<'\n';
    }
    return 0;
}