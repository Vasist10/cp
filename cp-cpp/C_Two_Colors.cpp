#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef vector<int> vi;

// Macros
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vecin(vec) for(auto &i : (vec)) cin >> i;
#define all(v) (v).begin(), (v).end()

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        //vasist
        int n,m;
        cin >>n>>m;
        vi a(m);
        vecin(a);
        ll ans=0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (i == j) continue;

                int st=max(1,n-a[j]);
                int nd=min(a[i],n-1);

                if (st<=nd) {
                    ans+=(nd-st+1);
                }
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
