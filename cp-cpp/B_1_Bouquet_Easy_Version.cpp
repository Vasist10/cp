// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> a(n);
//         int final_ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int ans = 0;
//         int l = 0;
//         int r = 0;
//         sort(a.begin(), a.end());
//         while (r < n)
//         {
//             if (a[r] > m || a[l] > m)
//             {
                   
//                 l++;
//                 r++;
                
//             }
//             else
//             {
//                 if (l == r || a[r] - a[l] <= 1)
//                 {
//                     ans += a[r];
//                     r++;
//                 }
//                 else
//                 {
//                     ans -= a[l];
//                     l++;
//                 }
//                 final_ans = max(final_ans, ans);
//             }
            
//         }
//         cout << min(final_ans, m) << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>    


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int64_t m;
        cin>>n>>m;
        vector<int64_t> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int64_t,int64_t> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int64_t ans = 0;
        for (const auto& pair : mp) { 
            int64_t k = pair.first;
            int64_t v0 = pair.second;
            auto it = mp.find(k+1);
            auto v1 = (it != mp.end() ? it->second : 0);
            for(int64_t x=0;x<=v0;x++){
                if(x*k <= m){
                    auto y = min((m-x*k)/ (k+1),v1);
                    ans = max(ans,x*k+y*(k+1));

                }else{
                    break;
                }
            }
        }
        cout<<ans<<endl;
    
    
    }
}           
