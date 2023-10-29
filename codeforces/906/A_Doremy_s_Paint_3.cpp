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
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    map<int,int> mp;
    for(auto x:a) mp[x]++;
    if(mp.size()>2){
        cout<<"No"<<endl;
        return;
    }
    else if(mp.size()==2){
        for(int i=1;i<n;i++){
            if(abs(mp[a[i]]-mp[a[i-1]])>1){
                cout<<"No"<<endl;
                return;
            }
        }
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        return;
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