#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> a(2, vector<char>(n));
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for(int i = 0; i < n-2; i++) {
            if((a[0][i] == 'x' && a[0][i+2] == 'x' && ( (a[0][i+1] != 'x') && (a[1][i+1] != 'x') && (a[1][i]!='x') && (a[1][i+2]!='x'))) || (a[1][i] == 'x' && a[1][i+2] == 'x' && ( (a[1][i+1] != 'x') && (a[0][i+1] != 'x') && (a[0][i]!='x') && (a[0][i+2]!='x')))) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}       