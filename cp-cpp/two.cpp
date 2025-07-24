#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector <int> a(n);
        map <int , int> freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        sort(a.begin(),a.end());
        int ans;
      
        for(int d=0;;d++){
            if(freq[d]==0){
                cout<<d<<endl;
                break;
            }
            else{
                freq[d+x]+=freq[d]-1;
                freq[d]=1;
            }

        }
        
       
       
    }
}