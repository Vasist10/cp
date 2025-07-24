#include <bits/stdc++.h>
using namespace std;

// Typedefs and Aliases
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

// Macros
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define F first
#define S second

// Constants
const int MOD = 1e9+7;
const ll INF = 1e18;

// Utility Functions
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// Main Function
bool pres7(long long n) {
    while (n > 0) {
        if (n % 10 == 7) return true;
        n /= 10;
    }
    return false;
}

long long n9(int length) {
    long long num = 0;
    for (int i = 0;i<length;i++) {
        num = num*10+9;
    }
    return num;
}

int sol(long long n) {
    int opct = INT_MAX; 

    int stct = 0;
    long long stepwise_n = n;
    while (!pres7(stepwise_n)) {
        stepwise_n += 9;
        stct++;
    }
    opct = min(opct, stct);

    for (int d = 1; d <= 10; d++) { 
        long long add_value = n9(d);
        long long cand = n + add_value;
        int count = 1; 

        while (!pres7(cand)) {
            cand += add_value;
            count++;
        }
        opct = min(opct, count);
    }

    return opct;
}

int main() {
    int t;
    cin >> t; 

    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        cout << sol(n) << endl;
    }

    return 0;
}