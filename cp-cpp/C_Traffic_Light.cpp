#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testcases = 1;
    cin >> testcases;
    
    while (testcases--) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;

        int mx = 0;
        s += s;         

        vector<int> idx;
        for (int i = 0; i < 2 * n; i++) {
            if (s[i] == 'g'){
                idx.push_back(i);
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] != c){
                continue;
            }else {
                int ptr = *lower_bound(idx.begin(), idx.end(), i);     
                mx = max(mx, ptr - i);     
            }
        }

        cout << mx << endl;
    }

    return 0;
}
