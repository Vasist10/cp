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
       cin>>n;
       string s;
       cin>>s;
       int ct = 0;
       bool ans=false;
        for(int i=0;i<n;i++){  
            if(s[i]=='.'){
                ct++;

            }
        }
        for(int i=0;i<=n-3;i++){
           if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
             ans = true;
           } 
        }

        cout<<(ans ? 2 : ct)<<endl;
        

    }
}