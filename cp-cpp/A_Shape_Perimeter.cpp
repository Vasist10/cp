#include <iostream>
#include <set>
using namespace std;
//vasist
int sol(int n, int m, pair<int, int> operations[]) {
    int peri = n*m *4;
    for(int i=0;i<n-1;i++){
        int x = operations[i].first;
        int y = operations[i].second;
        int min1 = (operations[i].first+m-operations[i+1].first) ; 
        int min2 = (operations[i].second+m-operations[i+1].second);
        if(min1 < 0 || min2 <0){
            continue;
        }else {
            int tot = 2*(min1+min2);
            peri -= tot;
        }
        
    }

    return peri;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        pair<int, int> operations[n];
        for (int i = 0; i < n; i++) {
            cin >> operations[i].first >> operations[i].second;
        }
        for(int i=1;i<n;i++){
            operations[i].first = operations[i-1].first + operations[i].first;
            operations[i].second = operations[i-1].second + operations[i].second;
        }

        int result = sol(n, m, operations);
        cout << result << endl;
    }

    return 0;
}
