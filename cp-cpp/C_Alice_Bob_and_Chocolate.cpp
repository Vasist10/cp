#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i=0;
    int j=n-1;
    int alice=0;
    int bob=0;
    while(i<=j){
        if(alice<=bob){
            alice+=a[i];
            i++;
        }else{
            bob+=a[j];
            j--;
        }
    }
    cout << i << " " << n-i << endl;
    return 0;
}   