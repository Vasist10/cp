#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string a;
        cin >> n>>a;
        
        bool flag = false;
        string res(n, 'a');
        
        for (int i=0;i<(n+1)/2 && !flag; i++){
            for (char c ='a'; c<='z'&&!flag; c++){
                res[i]=res[n-1-i]=c;
                
                if (res > a){
                    string rev=res;
                    reverse(rev.begin(), rev.end());
                    if (rev>a) {
                        flag=true;
                        break;
                    }
                }
            }
            
            if (!flag){
                res[i]=res[n-1-i]='z';
            }
        }
        
        if (flag) {
            cout <<res<<endl;
        } else {
            cout <<"-1"<<endl;
        }
    }
    return 0;
}