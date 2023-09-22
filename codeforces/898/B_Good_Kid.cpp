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
    ll n;
    cin>>n;
    vector<ll> arr(n);
    bool iszero=0;
    for(ll i=0;i<n;i++)
    {
         cin>>arr[i];
         if(arr[i]==0) iszero=1;
    }

    ll ans=1;
    
        sort(arr.begin(),arr.end());
            for(ll i=0;i<n;i++)
{
    if(i==0) ans=ans*(arr[i]+1);
     else ans=ans*arr[i];
    

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