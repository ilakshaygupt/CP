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
    std::cin >> n;
    
    int k = 1;
    
    while (2 * k < n) {
        k *= 2;
    }
    
    for (int i = k - 1; i >= 0; i--) {
        std::cout << i << " ";
    }
    for (int i = k; i < n; i++) {
        std::cout << i << " \n"[i == n - 1];
    }
   

}
/*
highest power of 2 
since 2^k and 2^k -1 have minimized xor
and 0 xor 2^k differ only in one bit
*/

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
