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
        cin >> n>>m;
        vi a(n);
        vecin(a);
        vi b(m);
        vecin(b);
        sort(all(b));
        int prev = INT_MIN;
        for(int i=0;i<n;i++){
            auto it = lower_bound(all(b), a[i] + prev);
                     
            int temp = *it;
            if(it!=b.end()){
                if(a[i]<prev){
                    a[i] = temp-a[i];
                }
                else{
                    a[i] = min(temp-a[i],a[i]);
                }
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
    return 0;
}