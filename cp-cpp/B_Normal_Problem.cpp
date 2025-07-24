#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;  
    cin>>T;
    while(T--){
        string n;
        cin>>n;
        string s;

        for(int i = n.size()-1; i >= 0; i--){
            if(n[i]=='p'){
                s.push_back('q');
            }
            else if(n[i]=='q'){
                s.push_back('p');
            }
            else if(n[i]=='w'){
                s.push_back('w');
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}