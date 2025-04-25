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

int sol(vi a) {
    int n = a.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += accumulate(a.begin(), a.begin() + i, 0);
    }
    return ans;

}

// Main Function
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        // vasist
        int n,m;
        cin >> n>>m;
        vi a(n);
        vecin(a);
        vi b(m);
        vecin(b);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        vi si1;
        si1.insert(si1.end(), a.begin(), a.end());
        si1.insert(si1.end(), b.begin(), b.end());


   

        vi si2;
        sort(b.begin(), b.end()); 
        si2.insert(si2.end(), b.begin(), b.end());
        si2.insert(si2.end(), a.begin(), a.end());
        sort(a.begin(), a.end(), greater<int>()); 

        int ans = max(sol(si1),sol(si2));
        cout << ans << '\n';

    }
    return 0;
}