#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find MEX of a vector
int findMex(const vector<long long>& arr) {
    int n = arr.size();
    vector<bool> present(n + 1, false);
    
    // Mark all numbers present in array
    for(long long num : arr) {
        if(num >= 0 && num <= n) {
            present[num] = true;
        }
    }
    
    // Find first missing number
    for(int i = 0; i <= n; i++) {
        if(!present[i]) {
            return i;
        }
    }
    return n + 1;
}

int solve_test_case() {
    int n;
    cin >> n;
    
    // Read the arrival matrix
    vector<vector<long long>> arrivals(n, vector<long long>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arrivals[i][j];
        }
    }
    
    // Try all possible orderings of serving queues
    vector<int> order(n);
    for(int i = 0; i < n; i++) {
        order[i] = i;
    }
    
    int maxMex = 0;
    
    do {
        // Simulate this ordering
        vector<long long> final_queues(n, 0);
        
        // Process each moment in time
        for(int moment = 0; moment < n; moment++) {
            // First, add new arrivals to all queues
            for(int i = 0; i < n; i++) {
                final_queues[i] += arrivals[i][moment];
            }
            
            // Then serve the queue according to our current ordering
            final_queues[order[moment]] = 0;
        }
        
        // Calculate MEX for this ordering
        int currentMex = findMex(final_queues);
        maxMex = max(maxMex, currentMex);
        
    } while(next_permutation(order.begin(), order.end()));
    
    return maxMex;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        cout << solve_test_case() << "\n";
    }
    
    return 0;
}