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

void sol(vi a,int n){
    if(a[0]==a[n-1]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        cout<< a[n-1]<< " ";
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        } 
        cout<<'\n';
    }
    
    
}

// Main Function
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        // vasist
       int n; cin>>n; vi a(n); for(int i=0;i<n;i++) cin>>a[i]; 
       sol(a,n);
       

    }
    return 0;
}