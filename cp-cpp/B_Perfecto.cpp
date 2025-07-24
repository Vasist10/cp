#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef vector<int> vi;

// Macros
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back

// Main Function
bool issqre(ll n) {
    ll k = sqrt(n);
    return (k * k == n);
}

void sol() {
    int n;
    cin>>n;
    if (n==1) {
        cout<<-1<<'\n';
        return;
    }

    vi ans(n);
    ans[0]=2;ans[1]=1;x`
    for(int i=2;i<n;i++){
        ans[i]=i+1;
    }
    for(int i=2;i<n-1;i++){
        if(issqre(1LL*(i+1)*(i+2)/2)){
            swap(ans[i],ans[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<'\n';


}

int main() {
    fast_io;
    int t;
    cin>>t;
    while (t--) {
        //vasist
        sol();
    }
    return 0;
}
