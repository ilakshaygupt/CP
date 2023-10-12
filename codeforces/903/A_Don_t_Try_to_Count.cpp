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
  int n,m;
  cin>>n>>m;
  string x,s;
  cin>>x>>s;
  int c=0;
        while(x.size()<s.size()){
            x+=x;
            c++;
        }
        if(x.find(s)!=string::npos){
            cout<<c<<endl;
        }
        else{
            x+=x;
            c++;
            if(x.find(s)!=string::npos){
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        }
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