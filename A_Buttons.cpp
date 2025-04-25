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
        int a,b,c;
        cin>>a>>b>>c;
        int ans = 0;
        if(a>b){
            a = a + floor(c/2);
            b = b + ceil(c/2);
            if(a>b) cout<<"First"<<endl;
            else if (a==b) cout<<"Second"<<endl;
            else cout<<"Second"<<endl;
        }else if(a==b){
            if(c%2==0){
                cout<<"Second"<<endl;
            }else{
                cout<<"First"<<endl;
            }
        }
        else{
            a = a + ceil(c/2);
            b = b + floor(c/2);
            if(a>b) cout<<"First"<<endl;
            else if (a==b) cout<<"Second"<<endl;
            else cout<<"Second"<<endl;
        }
    }
    return 0;
}