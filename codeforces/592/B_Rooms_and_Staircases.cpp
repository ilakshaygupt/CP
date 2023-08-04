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
  int ans = 0;
  int f=1;
  for(int i=1;i<=n;i++)
  {
    if(s[i-1]=='1')
    {
        f=0;
        ans=max(ans,max(2*i,2*(n-i+1)));
    }
  }

    if(f==0)
    cout<<ans<<endl;
    else 
    cout<<n<<endl;

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