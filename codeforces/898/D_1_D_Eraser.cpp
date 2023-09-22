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
  string s;
  cin>>s;
  int f=1;
  for(auto it :s) if(it!='W') {
    f=0;
  }

  if(f==1)
  {
    cout<<0<<endl;
    return;
  } 

  int ans=0;
  int curr=0;
  for(int i=0;i<n;i++){
    if(s[i]=='B')
    {
        if(curr<k) curr++;
        else ans++,curr=1;

    }
    else if(s[i]=='W' and curr!=0) curr++;
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