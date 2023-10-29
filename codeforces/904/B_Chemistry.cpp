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
    map<char,int> mp;
    for(auto c : s){
        mp[c]++;
    }
    int odd=0;
    for(auto it : mp){
        if(it.second%2==1){
            odd++;
        }
    }
    if(odd-k>1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
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