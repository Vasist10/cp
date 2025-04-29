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
        long long n, p;
        cin >> n >> p;
        vector<pair<long long, long long> > v(n);
        vector<long long> a(n), b(n);
 
        for (int i = 0; i < n; i++) 
            cin >> a[i];
 
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        for (int i = 0; i < n; i++) 
            v[i] = {b[i], a[i]};
 
        sort(v.begin(), v.end());
 
        long long minimum_cost = p;
        long long already_shared = 1;
 
        for (auto it : v) // n
        {
            long long can_be_shared = it.second;
            long long sharing_cost = it.first;
 
            if (sharing_cost >= p)
                break;
 
            if (already_shared + can_be_shared > n)
            {
                minimum_cost += (n - already_shared) * sharing_cost;
                already_shared = n;
                break;
            }
            else
            {
                minimum_cost += can_be_shared * sharing_cost;
                already_shared += can_be_shared;
            }
        }
 
        minimum_cost += (n - already_shared) * p; 
        cout << minimum_cost << endl;     
    }
    return 0;
}