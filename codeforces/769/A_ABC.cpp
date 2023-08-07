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
    cin>>n;
    string s;
    cin>>s;
    int zero=0;
    int ones=0;
    for(auto it : s)
    {
        if(it=='0')
        {
            zero++;
        }
        else ones++;
    }
    if(ones >1 or zero >1)
    cout<<"NO"<<endl;
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