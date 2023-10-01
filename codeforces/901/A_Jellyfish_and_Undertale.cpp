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
    long long maxsec,start,n;
    cin>>maxsec>>start>>n;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++)  cin>>arr[i];
    long long ans=0;

    if(start!=1)
    {
        ans+=(start-1);
        start=1;
    }
    for(long long i=0;i<n;i++)
    {
       ans+=min(maxsec,arr[i]+start)-1;
       start=1;

    }
    cout<<ans+1<<endl;
  
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