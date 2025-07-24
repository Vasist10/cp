#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,l,r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
       int k=0;
       int ans=0;
       int i=0;
       int j=0;
       int temp=0;
       while(j<n){
        temp+=a[j];
        if(temp>=l && temp<=r){
            ans++;
            
            temp=0;
            i=j+1;
        }
        else if(temp>r){
            temp-=a[i];
            i++;
           
        }
        else{
            j++;
            
        }
       }
       cout<<ans<<endl;
    }
} 
// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, l, r;
//         cin >> n >> l >> r;

//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int rounds = 0;
//         long long currentSum = 0;
//         int start = 0;

//         for (int end = 0; end < n; end++) {
//             currentSum += a[end];
            
//             while (currentSum > r && start <= end) {
//                 currentSum -= a[start];
//                 start++;
//             }

//             if (currentSum >= l && currentSum <= r) {
//                 rounds++;
//                 currentSum = 0; 
//                 start = end + 1;
//             }
//         }

//         cout << rounds << "\n";
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();
//     return 0;
// }
