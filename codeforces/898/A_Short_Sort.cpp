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
    string s;
    cin>>s;
   int c=0;
for(int i=0;i<3;i++)
{
        if(s[i]!='a' and i==0) c++;
        else if(s[i]!='b' and i==1) c++;
        else if(s[i]!='c' and i==2) c++;
}
if(c<=2) cout<<"YES"<<endl;
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