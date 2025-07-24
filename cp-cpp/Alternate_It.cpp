#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n= s.size();
	    if(n<=1){
	        cout<<0<<endl;
	        continue;
	    }
	    
	    bool flag = true;
	    for(int i=0;i<n-1;i++){
	        if(s[i]==s[i+1]){
	            flag = false;
	            break;
	        }
	    }
	    if(flag){
	        cout<<0<<endl;
	        continue;
	    }
	    
	    int z=0;
	    int o=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0') z++;
	        else o++;
	    }
	    if((z==0 || o==0 )){
	        cout<<3<<endl;
	        continue;
	    }
	    
	    if((n%2==0 && z==o) || (n%2!=0 && abs(z-o)==1)){
	        cout<<1<<endl;
	        
	    }else{
	        cout<<2<<endl;
	    }
	}

}
