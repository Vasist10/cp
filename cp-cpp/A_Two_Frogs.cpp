#include <iostream>
#include <cmath>
using namespace std;

string sol(int n, int a, int b)
{
    int distance = abs(a - b);
    if (distance % 2 == 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        cout << sol(n, a, b) << endl;
    }
    return 0;
}
