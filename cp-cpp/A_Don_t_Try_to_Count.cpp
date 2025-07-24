#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < 10; i++) {
    if (a.find(b) != string::npos) {
      cout << i << '\n';
      return;
    }
    a += a;
  }
  cout << "-1\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}