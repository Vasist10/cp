#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> ans(n);
        
        map<int,int> freq;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        for(auto it : freq){
            int x = it.first;
            int y = it.second;
            for(int i = 0; i < y; i++){
                if
                ans.push_back(a[i]);
            }
            
        }

    }
}   