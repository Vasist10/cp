#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int operations = 0;
        bool inSegment = false;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                if (!inSegment) {
                    operations++;
                    inSegment = true;
                }
            } else {
                inSegment = false;
            }
        }
        cout << min(operations, 2) << '\n';
    }
    return 0;
}
