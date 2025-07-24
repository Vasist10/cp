#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int N = s.size();
  deque<int> dq;
  for (int i = N - 1; i >= 0; i--){
    if (s[i] == 'l'){
      dq.push_back(i);
    }
    if (s[i] == 'r'){
      dq.push_front(i);
    }
  }
  for (int i = 0; i < N; i++){
    cout << dq[i] + 1 << '\n';
  }
}