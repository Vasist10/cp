#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n < 3) {
        cout << "Not enough elements" << endl;
        return 0;
    }
    
    set<int> unique_numbers;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        unique_numbers.insert(num);
    }
    
    if (unique_numbers.size() < 3) {
        cout << "Not enough unique numbers" << endl;
    } else {
        auto it = unique_numbers.rbegin(); // Reverse iterator for descending order
        advance(it, 2); // Move to the third largest element
        cout << *it << endl;
    }
    
    return 0;
}
