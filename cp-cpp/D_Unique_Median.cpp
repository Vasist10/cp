#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sol(const vector<int>& a) {
    int n = a.size();
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for(int j=i;j<n;j++){
            if ((j - i + 1) % 2 != 0){
                ans++;
                continue;
            }
            vector<int> b;
            for(int k=i;k<=j;k++){
                b.push_back(a[k]);
            }
            sort(b.begin(),b.end());
            if(b[(j-i)/2] == b[(j-i)/2 + 1]){
                ans++;
            }


        }
        
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << sol(a) << endl;
    }

    return 0;
}

