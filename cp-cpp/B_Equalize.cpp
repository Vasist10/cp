#include <bits/stdc++.h>

using namespace std;        

int main()
{
    int t;
    cin >> t;   
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        cin >> a[i];
        sort(a.begin(), a.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());
        
        
        int ans = 0;
        int j=0;
        for (int i = 0; i < a.size(); i++)
        {
            while(a[i]-a[j]>=n)
            {
                j++;
            }
            ans=max(ans,i-j+1);   
            
        }
        cout << ans << endl;
    }
    return 0;
}