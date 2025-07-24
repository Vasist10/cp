#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        set<int> unique_sums;
        for(int i=0;i<n;i++){
            cin>>a[i];
            unique_sums.insert(a[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i]+a[j]){
                    unique_sums.insert(a[i]+a[j]);
                } 
            }
        }
        cout << unique_sums.size() << endl;
        for(int sum : unique_sums){
            cout << sum << " ";
        }
        cout<<endl;
    }
    return 0;

}   
