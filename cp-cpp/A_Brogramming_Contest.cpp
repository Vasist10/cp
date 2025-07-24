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

    // Main Function
    int main() {
        fast_io;
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            string s;
            cin >> s;
            int ans=0;
            if(s[0]!='0'){
                ans++;
            }
            for (int i=0; i<n-1;i++){
                if(s[i]!=s[i+1]){
                    ans++;
                }
            }
            cout <<ans<<"\n";
        }
        return 0;
    }