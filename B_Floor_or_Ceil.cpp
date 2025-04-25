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
        int x,n,m;
        cin>>x>>n>>m;
        int mx,mn;
        int mm=m,nm=n;
        
        mx=x;
        for(int i=0;i<m;i++){
            if(mx<=0) break;
            mx = (mx+1)/2;
        }
        for(int i=0;i<n;i++){
            if(mx<=0) break;
            mx=mx/2;
        }   
        mn=x;
        for(int i=0;i<n;i++){
            if(mn<=0) break;
            mn=mn/2;
            
        }
        for(int i=0;i<m;i++){
            if(mn<=0) break;
            mn=(mn+1)/2;
        }

        cout<<mn<<" "<<mx<<'\n';
    }
    return 0;
}