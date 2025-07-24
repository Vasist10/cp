#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef vector<int> vi;

// Macros
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vecin(vec) for(auto &i:(vec)) cin>>i;

// Main Function
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        vecin(a);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > 0){
                ans++;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if(a[i] > 0 && a[i + 1] > 0){
                ans--;
            }
        }
        ans = min(ans, 2);
        cout << ans << '\n';
      }
    return 0;
}
