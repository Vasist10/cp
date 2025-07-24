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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n+1,0);
        for(int i=0;i<n;i++) cin>>a[i]; 
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        map<int, int> freq;
        for (int i = 0; i < n; i++)
            freq[a[i]]++;

        if(n<=k){
            cout<<1<<endl;
            continue;
        }
        vector<pair<int, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int> a, const pair<int, int> b)
         { return a.second < b.second; });

        for(int i=0;i<vec.size();i++){
            b[i+1] = b[i]+vec[i].second;
        }
        int ans = 0;
        int j=0;
        
        for(j=0;j<vec.size();j++){
            if(b[j]<=k){
                ans++;
            }
            
        }
        cout<<mp.size()-ans+1<<endl;
            
    }

}

