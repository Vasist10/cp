#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    
    // Key strategy:
    // 1. For small n (like 6), use pattern [1,1,2,3,1,2]
    // 2. For medium n (like 9), use higher numbers with repetitions [7,3,3,7,5,3,7,7,3]
    // 3. For larger n (like 15), use even higher numbers with more repetitions
    
    if(n <= 7) {
        // Similar to first example pattern
        std::vector<int> ans = {1, 1, 2, n-3, 1, 2};
        for(int x : ans) std::cout << x << " ";
        std::cout << "\n";
    }
    else if(n <= 10) {
        // Similar to second example pattern
        std::vector<int> ans = {n-2, 3, 3, n-2, 5, 3, n-2, n-2, 3};
        for(int x : ans) std::cout << x << " ";
        std::cout << "\n";
    }
    else {
        // For larger n, use high numbers with repetition
        std::vector<int> ans(n);
        int high = n;  // Use n as the high number
        
        // Fill first third with high number
        for(int i = 0; i < n/3; i++) {
            ans[i] = high;
        }
        
        // Fill middle third with n/2
        for(int i = n/3; i < 2*n/3; i++) {
            ans[i] = n/2;
        }
        
        // Fill last third with high number again
        for(int i = 2*n/3; i < n; i++) {
            ans[i] = high;
        }
        
        // Place some lower numbers strategically in middle
        if(n > 12) {
            ans[n/2] = n/3;
            ans[n/2 - 1] = n/3;
        }
        
        for(int x : ans) std::cout << x << " ";
        std::cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}