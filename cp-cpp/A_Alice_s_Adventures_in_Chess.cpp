#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n,m,k;
    cin >> n >> m >> k;
    string s;
    cin>>s;
    int x,y=0;  
    int ans = 0;
    for (int t = 0; t < 6; t++)
    {
        s+=s;
    }
    
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'N') y++;
      if (s[i] == 'E') x++;
      if (s[i] == 'S') y--;
      if (s[i] == 'W') x--;
      if (x == k && y == m) {cout<<"YES\n"; break;}      
    }
    if (x > m || y > k) {cout << "NO\n";}
  }
}   