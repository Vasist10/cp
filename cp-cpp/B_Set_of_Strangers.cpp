#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid(n, vector<int>(m));
        map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> grid[i][j];
                freq[grid[i][j]]++;
            }
        }

        map<int, int> adjacency;

        // Check all cells for adjacent values
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int curr = grid[i][j];

                // Right neighbor
                if (j + 1 < m)
                {
                    int right = grid[i][j + 1];
                    if (curr == right)
                    {
                        adjacency[curr]++;
                    }
                }

                // Down neighbor
                if (i + 1 < n)
                {
                    int down = grid[i + 1][j];
                    if (curr == down)
                    {
                        adjacency[curr]++;
                    }
                }

                // Left neighbor
                if (j - 1 >= 0)
                {
                    int left = grid[i][j - 1];
                    if (curr == left)
                    {
                        adjacency[curr]++;
                    }
                }

                // Top neighbor
                if (i - 1 >= 0)
                {
                    int top = grid[i - 1][j];
                    if (curr == top)
                    {
                        adjacency[curr]++;
                    }
                }
            }
        }

        // Find the maximum adjacency value
        int max_adj = 0;
        for (auto &p : adjacency)
        {
            max_adj = max(max_adj, p.second);
        }

        // Sum all adjacency counts
        int ans = 0;
        for (auto &p : adjacency)
        {
            ans += (p.second>0 ? p.second : freq[p.first]);
        }

        // Exclude the number with the highest adjacency count
        int min_steps = ans - max_adj;

        cout << min_steps << "\n"; // Ensure each result is printed on a new line
    }

    return 0;
}
