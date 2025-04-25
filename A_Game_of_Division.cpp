#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef vector<int> vi;

// Macros
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool found = false;
        int chosen_index = -1;

        // Two-pointer logic
        int i = 0, j = 1;
        while (i < n && !found)
        {
            while (j < n && !found)
            {
                if (abs(a[j] - a[i]) % k != 0)
                {
                    found = true;
                    chosen_index = i; // Index `i` is valid for the first player
                }
                j++;
            }
            i++;
            j = i + 1; // Ensure j always starts ahead of i
        }

        if (found)
        {
            cout << "YES" << endl;
            cout << chosen_index + 1 << endl; // Output 1-based index
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
