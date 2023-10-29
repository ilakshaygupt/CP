#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef long double ld;

#define MULTITEST
void solve() {
        int n, l, r; cin>>n;
    char c;
 
    multiset<int> sts, ends;
    while(n--)
    {
        cin>>c>>l>>r;
        if(c == '+')sts.insert(l), ends.insert(r);
        else sts.erase(sts.find(l)), ends.erase(ends.find(r));
 
        if(ends.size() && *ends.begin() < *sts.rbegin())cout<<"YES\n";
        else cout<<"NO\n";
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