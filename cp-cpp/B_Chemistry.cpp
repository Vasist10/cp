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
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       int ans=0;

       map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(n-k==1){
            cout<<"YES"<<endl;
            
        }
        else{
            int remp=0;
            for(auto i:mp){
                if(i.second%2==1)
                    remp++;
            }
            if(remp-k<=1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }

    }
    return 0;
}