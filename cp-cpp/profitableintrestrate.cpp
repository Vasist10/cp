#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b;  // Read values of a and b for each test case
        
        // If Alice has fewer coins than required for the Profitable deposit:
        if (a >= b) {
            cout << a - b << endl;  // She can directly open the deposit and leave the remaining a - b coins.
        } else {
            // Alice has fewer coins, so she needs to deposit into the Unprofitable deposit.
            int x = min(a, (b - a) / 2);  // Calculate how much she can deposit to reduce b.
            cout << a - x << endl;  // Output the maximum remaining coins she can deposit into the Profitable deposit.
        }
    }
    return 0;
}
