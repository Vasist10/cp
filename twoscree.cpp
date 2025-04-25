
#include <bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    string s,t;
    cin>>s;
    cin>>t;
    int i=0;
    while(i<min(s.size(),t.size()) & s[i]==t[i])
    {
        i++;
    }
   cout<< s.size()+t.size()-max(0,i-1)<<endl;
}
}
