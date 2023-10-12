#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int deletions = 0;
        int expected = a[0];
        int length = 1;
        
        for (int i = 1; i < n; i++) {
            if (a[i] == expected) {
                length++;
            } else {
                deletions += length - 1;
                length = 1;
                expected = a[i];
            }
        }
        
        deletions += length - 1;  // Add deletions for the last block
        
        cout << deletions << endl;
    }
    
    return 0;
}
