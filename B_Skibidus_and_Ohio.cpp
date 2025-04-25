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
int solve(std::string s) {
    if (s.length()==1) return 1;
    
    bool poss=false;
    for (int i = 0; i<s.length()-1;i++) {
        if (s[i]==s[i+1]) {
            poss=true;
            break;
        }
    }
    
    if (poss) return 1;
    
    return s.length();
}

int main() {
    int t;
    std::cin >> t;
    
    while (t--){
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
    return 0;
}