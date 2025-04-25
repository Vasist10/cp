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
        // vasist
       int n;
       cin >> n;
       vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(is_sorted(a.begin(), a.end())){
            int mn=a[1]-a[0];
            for( int i=2;i<n;i++){
                mn=min(mn,a[i]-a[i-1]);
            }
            mn = mn/2 +1;
            cout<<mn<<endl;
            
        }
        else{
            cout<<0<<endl;
        }

    }
    return 0;
}