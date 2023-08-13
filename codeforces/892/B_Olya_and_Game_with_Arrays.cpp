#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;  // Number of arrays
        
        vector<vector<int>> arrays(n);
        vector<pair<int, int>> secondLargest;  // Store (second largest, array index) pairs
        vector<long long> smallestSecondLargestSum;
        
        for (int j = 0; j < n; ++j) {
            int m;
            cin >> m;  // Number of elements in the array
            arrays[j].resize(m);
            
            for (int k = 0; k < m; ++k) {
                cin >> arrays[j][k];
            }
            
            sort(arrays[j].begin(), arrays[j].end());  // Sort the array
            
            if (arrays[j].size() > 1) {
                secondLargest.push_back({arrays[j][1], j});
            }
        }
        
        sort(secondLargest.begin(), secondLargest.end());
        
        long long beauty = 0;
        
        for (int j = 0; j < n; ++j) {
            if (arrays[j].size() > 1 && j != secondLargest[0].second) {
                beauty += static_cast<long long>(arrays[j][1]);
            }
        }
        
        vector<int> smallestOfArraysWithSecondLargest;
        
        for (int j = 0; j < n; ++j) {
            
                smallestOfArraysWithSecondLargest.push_back(arrays[j][0]);
            
        }
        
        sort(smallestOfArraysWithSecondLargest.begin(), smallestOfArraysWithSecondLargest.end());
        
        if (!smallestOfArraysWithSecondLargest.empty()) {
            beauty += static_cast<long long>(smallestOfArraysWithSecondLargest[0]);
        }
        
        cout << beauty << endl;
    }

    return 0;
}
