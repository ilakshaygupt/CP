#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

typedef long long ll;
typedef long double ld;

#define MULTITEST
void solve() {
    int t;
    cin >> t;  
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; 
        
        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j]; 
        }
        
        bool allSame = true;
        for (int j = 1; j < n; ++j) {
            if (a[j] != a[0]) {
                allSame = false;
                break;
            }
        }
        
        if (allSame) {
            cout << "-1" << endl;
        } else {
            sort(a.begin(), a.end());
            
            vector<int> b, c;
            int smallest = a[0];
            for (int j = 0; j < n; ++j) {
                if (a[j] == smallest) {
                    b.push_back(a[j]);
                } else {
                    c.push_back(a[j]);
                }
            }
            
            cout << b.size() << " " << c.size() << endl;
            for (int num : b) {
                cout << num << " ";
            }
            cout << endl;
            for (int num : c) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
}

int32_t main() {
#ifdef ONPC
    freopen("input", "r", stdin);
#endif
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
#ifdef MULTITEST
     cin >> t;
#endif
    while (t--) {
        solve();
    }

    return 0;
}


// -'0' for string to integer
// *1LL for overflow
// multiset duplicate