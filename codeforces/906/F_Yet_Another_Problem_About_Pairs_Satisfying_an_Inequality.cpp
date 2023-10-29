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
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(long long i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    long long ans=0;

    for(long long i=0;i<n;i++){
        long long upper=a[i]+k-1;
        long long lower=a[i];
        long long up=upper_bound(a.begin(),a.end(),upper)-a.begin();
        long long low=lower_bound(a.begin(),a.end(),lower)-a.begin();
        ans=max(ans,up-low);


    }
    cout<<ans<<endl;
  
}

int32_t main() {
#ifdef ONPC
    freopen("input", "r", stdin);
#endif
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
#ifdef MULTITEST
    //  cin >> t;
#endif
    while (t--) {
        solve();
    }

    return 0;
}


// -'0' for string to integer
// *1LL for overflow
// multiset duplicate