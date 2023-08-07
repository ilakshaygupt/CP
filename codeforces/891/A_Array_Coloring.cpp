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
    int n;
        cin >> n;

        vector<int> a(n);
        int even_count = 0, odd_count = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
            if (a[j] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
       
         if(odd_count%2==1)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
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