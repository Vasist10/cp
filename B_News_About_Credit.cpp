#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];  
    vector<int> b(n,0);
   
    if(a[0]==0){
        cout<<-1<<endl;
        return 0;
    }
    
    int tot=0;
    for(int i=0;i<n;i++){
        tot+=a[i];
        if(a[i]>0){
            b[i]=1;
        }
    }
    if(tot<n-1){
        cout<<-1<<endl;
        return 0;
    }
    cout<<n-1<<endl;
    int pos=0;
    for(int i=1;i<n;i++){
        if(a[i]>0){
            cout<<pos+1<<" "<<i+1<<endl;
            a[pos]--;
            pos=i;
        }
    }
    for(int i=1;i<n;i++){
        if(b[i]==0){
            int t=0;
            while(a[t]==0){
                t++;
            }
            cout<<t+1<<" "<<i+1<<endl;
            a[t]--;
        
        }
    }
    return 0;
}           

