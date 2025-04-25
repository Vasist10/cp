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
    
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        //vasist
        int t;
        cin >> t;
        while(t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            map<int, int> mp;
            
            for(int i = 0; i < n; ++i) {
                cin >> a[i];
                ++mp[a[i]];
            }
            if(n==1){
                cout << 1 <<" " << 1 << '\n';
                continue;
            }
    
            if(mp.size() == 1 && n>1) {
                cout << 0 << "\n";
                continue;
            }
    
            int ans = 0, al = -1, ar = -1;
            int i = 0;
            
            while(i < n) {
                if(mp[a[i]] > 1) {
                    ++i;
                    continue;
                }
                
                int j = i;
                while(j < n && mp[a[j]] < 2) {
                    ++j;
                }
                if(j - i > ans) {
                    ans = j - i;
                    al = i;
                    ar = j - 1;
                }
                i = j;
            }
            
            if(al == -1) {
                cout << 0 << "\n";
            } else {
                cout << al + 1 << " " << ar + 1 << "\n";
            }
        }
        
        return 0;
    }
    