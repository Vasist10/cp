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
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        vi a(n);
        if (n == 2)
        {
            cout << "2 1" << endl;
            continue;
        }
        if (k % 2 == 0)
        {
            for (ll i = 0; i < n; i++)
            {
                a[i] = n - 1;
            }
            a[n-2] = n;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                a[i] = n;
            }
            a[n - 1] = n - 1;
        }
        for(int l:a){
            cout<<l<<" ";
        }   cout<<'\n';
    }
    return 0;
}