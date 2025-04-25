
#include <bits/stdc++.h>

using namespace std;



int main() {
 
  int t;
  cin >>t;
  while(t--){
  int n,k;
  cin>>n>>k;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  int j=0;
  int ans=0;
  
  for(int i=0;i<n;i++){
        j=max(j,i);//ensures that j is always right side of i ,,,,without this test case failed
        while(j+1<n && a[j+1]<=a[j]+1 && a[j+1]<k+a[i]){
            j++;
        }
        ans = max(ans, j - i + 1);
        
  }
  cout<<ans<<endl;
  }
}
  