#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main() {
	ios::sync_with_stdio(false),cin.tie(0);
	int t;
	long long n,x,k,i;
	for(cin>>t;t>0;t--)
	{
		cin>>n>>k>>x;
		if(x!=1)
		{
			cout<<"YES\n";
			cout<<n<<'\n';
			for(i=0;i<n;i++)cout<<"1 ";
			cout<<'\n';
			continue;
		}
		if(n==1)
		{
			cout<<"No\n";
			continue;
		}
		if(n%2==1&&k==2)
		{
			cout<<"NO\n";
			continue;
		}
		if(k==1)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		if(n%2==1)
		{
			v.push_back(3);
			n-=3;
		}
		for(i=0;i<n/2;i++)v.push_back(2);
		cout<<v.size()<<'\n';
		for(i=0;i<v.size();i++)cout<<v[i]<<' ';
		cout<<'\n';
		v.clear();
	}
	return 0;
}