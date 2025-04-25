#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minOperations(string s) {
    int n = s.length();
    
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;

    int min_operations = n; // Initialize with maximum possible operations

    // Try to find the first pair of different characters
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            // Calculate the operations for the two parts
            int operations = 1 + minOperations(s.substr(0, i)) + minOperations(s.substr(i));
            min_operations = min(min_operations, operations);
        }
    }

    return min_operations;
}

int main() {
    int T;
    cin >> T; // Read number of test cases
    
    while (T--) {
        int N;
        string S;
        
        cin >> N; // Read length of the string (not used directly)
        cin >> S; // Read the binary string
        
        int result = minOperations(S); // Calculate minimum operations
        cout << result << endl; // Output the result
    }
    
    return 0;
}