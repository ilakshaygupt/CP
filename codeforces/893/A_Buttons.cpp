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
  int a,b,c;
  cin>>a>>b>>c;
  int ans;
    a+=c/2;
    b+=c/2;
    if(c&1)
    {
        if(a>b) ans=1;
        else if(b>a) ans=2;
        else if( a==b) ans =1;

    }
    else{
        if(a>b) ans=1;
        else if(b>a) ans=2;
        else if( a==b) ans =2;

    }
    if(ans==1) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
  
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