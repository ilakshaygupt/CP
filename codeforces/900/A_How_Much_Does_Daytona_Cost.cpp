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
  int n,k;
  cin>>n>>k;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  int f=0;
  for(int i=0;i<n;i++){
    if(arr[i]==k) {
        f=1;
        break;
    }
  }
  if(f) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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