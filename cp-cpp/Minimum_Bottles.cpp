#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, x; 
        cin >> n >> x;

        vector<int> a(n); 
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        int ans=ceil(static_cast<double>(sum)/x);

        cout<<ans<<endl;
    }

    return 0;
}