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

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) { // Check divisors up to √n
        if (n % i == 0) {
            return false; // Divisible, so not a prime
        }
    }
    return true; // Prime if no divisors found
}

// Main Function
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        // vasist
       int n;
       cin >> n;
       vector <int> a(n-1);
       for (int i=0;i<n;i++){
        int u , v;
        cin >> u >> v;
        a[u]=2*n;
        a[v] = 2*n -4;
        for(int i= 1;i<2*n;i++)
        {
            if()
        }


       }     
    }
    return 0;
}