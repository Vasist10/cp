
#include <bits/stdc++.h>

using namespace std;


int main() {

  int tt;
  cin >> tt;
  while (tt--) {
    int n, r;
    cin >> n >> r;
    vector<int> a(n);
    int s = 0;
    int h = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      r -= a[i] / 2;
      h += a[i] / 2 * 2;
      
      s += a[i]%2;
    }
    if (s <= r) {
      h += s;
    } else {
      int extra = s - r;
      h += r - extra;
    }
    cout << h << '\n';
  }
  return 0;
}
