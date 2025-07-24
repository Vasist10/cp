#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend());
    
    long long ans = a[0];
    for (long long i = 1; i < n; i++) {
        ans = max(ans, a[i] + i * x);
    }
    
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}