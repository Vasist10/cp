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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        
        long long ans = 0;
        vector<int> leftL, rightR;
        vector<long long> cumSum(n+1, 0);
        
        for(int i = 0; i < n; i++) {
            cumSum[i+1] = cumSum[i] + a[i];
        }
        

        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                leftL.push_back(i);
            }else{
                rightR.push_back(i);
            }
        }
        

        
        reverse(rightR.begin(), rightR.end());
        
        for(int i = 0; i < min(leftL.size(), rightR.size()); i++) {
            if(leftL[i] < rightR[i]) {
                ans += cumSum[rightR[i]+1] - cumSum[leftL[i]];
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
