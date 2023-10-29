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
    int ans=4;
    int last;
    if(s[0]=='0'){ans+=10;last=10;}
    else{ last=s[0]-'0';ans+=last;}
    
    for(int i=1;i<s.size();i++){
        if(s[i]=='0'){
            ans+=(abs(last-(10)));
            last=10;
        }
        else{
         ans+=(abs(last-(s[i]-'0')));
        last=s[i]-'0';
        }

    }
  cout<<ans-1<<endl;
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