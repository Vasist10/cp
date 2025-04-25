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
       ll n,q;
       cin>>n>>q;
       vll a(n);
       vll prefix(n+1,0);
       vecin(a);
       for(int i=0;i<n;i++){
           prefix[i+1] = prefix[i]+a[i];
       }
       for(ll i=0;i<q;i++){
            ll l,r,k;
            cin>>l>>r>>k;
            ll temp = prefix [n] - prefix [r] + prefix[l-1];
            temp+= k*(r-l+1);
            cout<<(temp%2==0?"NO":"YES")<<'\n';

       }     
    }
    return 0;
}