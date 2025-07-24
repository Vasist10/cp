#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the size of the permutation

        vector<vector<int>> adj(n, vector<int>(n));
        vector<int> inDegree(n, 0); // Vector to store in-degrees

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s; // Read the adjacency matrix as a string
            for (int j = 0; j < n; j++) {
                adj[i][j] = s[j] - '0'; // Convert character to integer
                if (adj[i][j] == 1) {
                    inDegree[j]++; // Increment in-degree for vertex j
                }
            }
        }

        // Create a vector of pairs to store (in-degree, vertex)
        vector<pair<int, int>> vertices;
        for (int i = 0; i < n; i++) {
            vertices.push_back({inDegree[i], i + 1}); // Store in-degree and vertex (1-indexed)
        }

        // Sort vertices based on in-degree (ascending)
        sort(vertices.begin(), vertices.end());

        // Output the permutation based on sorted in-degrees
        for (const auto& vertex : vertices) {
            cout << vertex.second << " "; // Output the vertex number
        }
        cout << endl; // New line after each test case output
    }

    return 0;
}