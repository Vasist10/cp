#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);  
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    vector<long long> val1(n + 1, 0), val2(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        val1[i + 1] = val1[i] + abs(a[i] - b[i]);
    }
    for (int i = n - 1; i >= 0; --i) {
        val2[i] = val2[i + 1] + abs(a[i] - b[m - n + i]);
    }
    long long res = 0;
    for (int i = 0; i <= n; ++i) {
        res = max(res, val1[i] + val2[i]);
    }   
    cout << res << endl;
}
}
