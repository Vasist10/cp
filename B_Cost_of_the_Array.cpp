#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define all(v) (v).begin(),(v).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vecin(vec) for(auto &i:(vec)) cin>>i;
#define print(vec) for(auto it = vec.begin(); it!=vec.end(); it++) cout<<*it<<' '; cout<<endl;
#define printpair(mp) for(auto it = mp.begin(); it!=mp.end(); it++) cout<<it->first<<' '<<it->second<<endl;
#define print2d(vec,r,c) for(int i=0;i<r;i++){for(int j=0;j<c;j++){cout<<vec[i][j]<<" \n"[j+1==c];}};
#define belongs(c,a,b) ((c)>=(a) && (c)<=(b))
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define pm cout<<"-1\n";
#define endl "\n"
#define pb push_back
#define mkp make_pair

void solve(){
    int n, k;
    cin >> n >> k;
    vi a(n);
    vecin(a);
    
    // b.pb(0);
    int j = 1;

    while (j<=n-k+1)
    {
        if(a[j]==1){
            j++;
        }
        else break;
    }

    if(k==n){
        for (int i = 1; i <n; i+=2)
        {
            if((i+1)/2!=a[i]){
                cout<<(i+1)/2<<'\n';
                return;
            }
        }
        cout<<n/2+1<<'\n';
        return;
    }
    else if(j<=n-k+1){
        cout<<1<<'\n';
    }

    else{cout<<2<<'\n';}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}
