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
        int n, k;
        cin >> n >> k;
        vi a(n);
        vecin(a);
        
        for(int i=0;i<n;i++){
            a[i]=a[i]%k;
            if(a[i]==0){
                a[i]=k;
            }
        }    
        vi b(n);
        iota(all(b),0);
        stable_sort(b.begin(),b.end(),[&](int i,int j){
            return a[i]>a[j];
        });
        for(int i=0;i<n;i++){
            cout<<b[i]+1<<" ";
        }
        cout<<endl;

    }
    return 0;
}