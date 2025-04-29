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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vecin(a);
        int ans=INT_MAX;
        
        for(int i=0;i<n;i++){
            int cur = k-a[i]%k;
            if(a[i]%k==0){
                cur=0;
            }
            ans=min(ans,cur);
         }
        if(k==4){
            int ct=0;
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    ct++;
                }
            }
            if(ct>1){
                ans=0;
            }
            else {
                ans = min(ans,2-ct);
            }
        }
        cout<<ans<<'\n';
        
    }
    return 0;
}