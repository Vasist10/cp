#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

void solve() {
    int n;
    cin >> n;
    int s = 0;
    for (int i=0; i<n-1; ++i) {
        int x;
        cin >> x;
        s += x;
    }
    cout << -s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;
    while (cases--) solve();
}
