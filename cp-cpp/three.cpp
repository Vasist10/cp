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
        int n,m,q;
        cin >> n >> m>>q;
        vector <int> a(n);
        vector <int> b(m);
        for (int i=0;i<n;i++){
            cin>>a[i];
            a[i]--;
        }
        for (int i=0;i<m;i++){
            cin>>b[i];
            b[i]--;
        }
        vector<int>vis(n,0);
        int c=0;
        int flag=0;
        for(int i=0;i<m;i++){
            if(vis[b[i]]) continue;
            if(b[i]!=a[c]) flag=1;
            vis[b[i]]=1;
            c++;
            
        }
        if(flag) cout<<"tidak"<<endl;
        else cout<<"ya"<<endl;
    }
}