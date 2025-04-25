#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef vector<int> vi;

// Macros
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        int tts = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 2) tts++;
        }

        if (tts == 0) {
            cout << 1 << '\n';
            continue;
        }
        if (tts%2==1) cout << -1 << '\n';

        int lt = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == 2) lt++;
            if (lt == tts - lt) {
                cout << i + 1 << '\n'; 
                break;
            }
        }
    }
    return 0;
}
