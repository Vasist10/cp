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

void sol(){
    
       int n,m;     
       cin>>n>>m;
        vi a(n);
        vecin(a);
        int b;
        cin>>b;
        int prev = INT_MIN;

        for(int i=0;i<n;i++){
            int temp = b-a[i];
            if(a[i]<prev){
                a[i] = temp;
            }
            else if(temp<a[i] && temp>=prev){
                a[i] = temp;
            }

            if(a[i]<prev){
                cout<<"NO"<<'\n';
                return;
            }
            prev = a[i];
        }
        cout<<"YES"<<'\n';
    }



// Main Function
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        // vasist
        sol();
    }
}