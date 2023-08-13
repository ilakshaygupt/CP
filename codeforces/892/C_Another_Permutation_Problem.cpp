#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;  // Length of the permutation
        
        vector<int> p(n);
        
        for (int j = 0; j < n; ++j) {
            p[j] = j + 1;
        }
        
        // Move the n-1 largest elements to the front of the array
        for (int j = 0; j < n - 1; ++j) {
            swap(p[j], p[n - 1]);
        }
        
        long long cost = 0;
        for (int j = 0; j < n; ++j) {
            cost += static_cast<long long>(p[j]) * (j + 1);
        }
        
        cout << cost -(n*n -n)<< endl;
    }

    return 0;
}
