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
  vector<int> arr(n);
  for(int i=0;i<n;i++) 
  {
        arr[i]=(2*i+1);
  }
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  cout<<endl;

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