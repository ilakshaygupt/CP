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
void solve(int t) {
    int ans=0;
    int a,b,c;
    cin>>a>>b>>c;
    int tbuns=0;
    tbuns+=(2*a);
    tbuns+=(2*b);
    int tpattycheese=(a+2*b);
    if(tbuns>=c+1 and tpattycheese>=c) cout<<"Case #"<<t<<": "<<"YES"<<endl;
   else  cout<<"Case #"<<t<<": "<<"NO"<<endl;

  
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
int c=1;
    while (t--) {
        
        solve(c++);
    }

    return 0;
}


// -'0' for string to integer
// *1LL for overflow
// multiset duplicate