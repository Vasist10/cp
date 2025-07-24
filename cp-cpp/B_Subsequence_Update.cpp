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
long long solve(int n, int l, int r, vector<int>& a) {
    long long ini = 0;
    for(int i = l-1; i < r; i++) {
        ini += a[i];
    }
    long long mins=ini;
    for(int i=0;i<n;i++) {
        for(int j =0;j<n;j++) {
            reverse(a.begin() + i, a.begin() + j + 1);
            
            long long news = 0;
            for(int k=l-1;k<r;k++) {
                news += a[k];
            }
            mins = min(mins,news);
            reverse(a.begin()+i,a.begin()+j+1);
        }
    }
    
    return mins;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, l, r;
        cin >> n >> l >> r;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        cout << solve(n, l, r, a) << "\n";
    }
    return 0;
}