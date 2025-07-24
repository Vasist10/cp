#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    void dfs(int node, vector<bool>& visited, const vector<vector<int>>& adj, const vector<bool>& removed) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor] && !removed[neighbor]) {
                dfs(neighbor, visited, adj, removed);
            }
        }
    }
    
    int count(int n, const vector<vector<int>>& adj, const vector<bool>& removed) {
        vector<bool> visited(n + 1, false);
        int components = 0;
        
        for (int i = 1; i <= n; i++) {
            if (!visited[i] && !removed[i]) {
                dfs(i, visited, adj, removed);
                components++;
            }
        }
        return components;
    }
    
    int highindeg(int n, const vector<vector<int>>& adj, const vector<bool>& removed) {
        int maxdeg = -1;
        int ver = -1;
        
        for (int i = 1; i <= n; i++) {
            if (!removed[i]) {
                int curr = 0;
                for (int neighbor : adj[i]) {
                    if (!removed[neighbor]) curr++;
                }
                if (curr > maxdeg) {
                    maxdeg = curr;
                    ver = i;
                }
            }
        }
        return ver;
    }

public:
    int solve(int n, const vector<pair<int, int>>& edges) {
        vector<vector<int>> adj(n + 1);
        for (const auto& edge : edges) {
            adj[edge.first].push_back(edge.second);
            adj[edge.second].push_back(edge.first);
        }
        
        vector<bool> removed(n + 1, false);
        
        int v1 = highindeg(n, adj, removed);
        removed[v1] = true;
        int v2 = highindeg(n, adj, removed);
        removed[v2] = true;
        
        return count(n, adj, removed);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> edges;
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        
        Solution solution;
        cout << solution.solve(n, edges) << '\n';
    }
    
    return 0;
}