#include <bits/stdc++.h>
using namespace std;



void run_case() {
    string S;
    cin >> S;
    int sum = 0, twos = 0, threes = 0;
 
    for (auto &ch : S) {
        sum += ch - '0';
        twos += ch == '2';
        threes += ch == '3';
    }
 
    for (int x = 0; x <= min(twos, 9); x++)
        for (int y = 0; y <= min(threes, 9); y++)
            if ((sum + 2 * x + 6 * y) % 9 == 0) {
                cout << "YES" << '\n';
                return;
            }
 
    cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        run_case();
    }
    
    return 0;
}
