#include<bits/stdc++.h>
using namespace std;
  
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin >> s;
        int ans=0;
        int len=0;
        int bar=0;
        for(int i=0;i<n;i++){
            if(i>=bar && s[i]=='0'){
                len++;
            }else{
                len=0;      
            }
            if(len==m){
                ans++;
                bar=i+k;
                len=0;
            }
        }
        cout<<ans<<endl;

        
    }
}