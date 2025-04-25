#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

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
       vi a(n);
       vecin(a);
       int ans = 0;
       for(int i=0;i<n;i++){
        ans^=a[i];
       }     
       if(ans==0){
        cout<<0<<'\n';
       }
       else{
        if (n%2==1){
            cout<<ans<<'\n';
        }else{
            cout<<-1<<'\n';
        }
        
       }
    }
    return 0;
}