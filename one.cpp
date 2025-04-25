#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        while(a.size()>1){
            a[0]=(a[0]+a[1])/2;
            a.erase(a.begin()+1);
            
        }
        cout<<a[0]<<endl;
    }
}