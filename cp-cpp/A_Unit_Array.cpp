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
        int c;
        cin >> c;
        vi a(c);
        int sum = 0;
        int n = 0;

        for (int i = 0; i < c; i++) { 
            cin >> a[i];
            if (a[i] == -1) n++;
            sum += a[i];
        }

        int ct = 0;
        if (sum >= 0 && n % 2 == 0) {
            cout << ct << endl;
            continue;
        }
        if (sum < 0) {
            ct = (abs(sum) + 1) / 2; 
            n -= ct; 
        }

        
        if (n % 2 == 1) {
            ct++;
        }

        cout << ct << endl;
    }
    return 0;
}
