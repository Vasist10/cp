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
       int x,y,i,j;
       cin>>x>>y>>i>>j;
       int ct=0;
       if(x==1 && y==1 && i==1 && j==1){
        cout<<1<<" "<<1<<" "<<1<<" "<<1<<'\n';
        continue;
       }
       pii arr[] = {{1, 1}, {x, y}, {1, y}, {x, 1}};
       for(int k=0;k<4;k++){
        if(ct==2){
            break;
        }
        if(arr[k] == make_pair(i, j)){
            continue;
        }
        ct++;
        cout << arr[k].first << " " << arr[k].second << " ";
    }     
    cout<<'\n';
    }
    return 0;
}