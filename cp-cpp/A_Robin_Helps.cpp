#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = 0;
    int rob = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] >= k){
        rob+=a[i];
      }


      if (a[i] ==0 && rob>0) {
        rob--;
        ans++;
      }
    }
    
    cout << ans << '\n';
  }
}   