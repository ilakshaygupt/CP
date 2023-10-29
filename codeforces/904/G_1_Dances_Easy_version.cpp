#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n - 1); // Array a
        vector<int> b(n);    // Array b
        vector<int> c(2 * n); // Merged array c

        for (int i = 0; i < n - 1; i++) {
            cin >> a[i];
            c[i] = a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            c[n - 1 + i] = b[i];
        }

        sort(c.begin(), c.end()); // Sort the merged array

        int operations = 0;
        int i = 0, j = 0;

        while (i < n && j < n) {
            if (c[i] < c[n - 1 + j]) {
                i++;
            } else {
                j++;
            }
            operations++;
        }

        cout << operations << endl;
    }

    return 0;
}
