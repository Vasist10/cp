#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=1;
        while (n>3) 
        {
            n /=4 ; 
            ans*=2;  
        }
        cout<<ans<<endl;

        
    }
    return 0;
}   