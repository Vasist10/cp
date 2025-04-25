#include <bits/stdc++.h>
using namespace std;
int cyclen(vector<int> perm,int start){
    int curr=start;
    int length=0;
    unordered_set<int>visited;
    
    while (visited.find(curr)==visited.end()){
        visited.insert(curr);
        curr=perm[curr-1];
        length++;
    }
    return length;
}

vector<int>val(vector<int>& perm) {
    int n=perm.size();
    vector<int>values(n,0);
    unordered_set<int>visited;
    
    for (int i=1;i<=n;i++){
        if(visited.find(i)==visited.end()) {
            int cycleLen=cyclen(perm, i);
            int curr = i;
            while (visited.find(curr) == visited.end()) {
                visited.insert(curr);
                values[curr - 1] = cycleLen;
                curr = perm[curr - 1];
            }
        }
    }
    return values;
}

long long sol(int n, vector<int>& perm) {
    long long minCost = 0;
    vector<int> cur = perm;
    
    while (true) {
        vector<int> values = val(cur);
        
        if (values[0] == n) break;
        
        int c1 = -1, c2 = -1;
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (values[i] != values[j]) {
                    c1 = i + 1;
                    c2 = j + 1;
                    break;
                }
            }
            if (c1 != -1) break;
        }
        
        minCost += values[c1 - 1] + values[c2 - 1];
        swap(cur[c1 - 1], cur[c2 - 1]);
    }
    
    return minCost;
}

int main() {
    //your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> perm(n);
        for (int i = 0; i < n; i++) {
            cin >> perm[i];
        }
        cout << sol(n, perm) << "\n";
    }
    
    return 0;
}


