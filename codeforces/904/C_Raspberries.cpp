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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
       
    }
    for(int i=0;i<n;i++){
        if(v[i]%k==0){
            cout<<0<<endl;
            return;
        }
    }
    if(k==4){
        int two=0;
        for(int i=0;i<n;i++){
            while(v[i]%2==0){
                v[i]/=2;
                two++;
            }
        }
        if(two>=2){
            cout<<0<<endl;
            return;
        }
        if(two==1){
            cout<<1<<endl;
            return;
        }
        if(two==0){
            for(int i=0;i<n;i++){
                if(v[i]%4==3){
                    cout<<1<<endl;
                    return;
                }
            }
             cout<<2<<endl;
                return;
        }
    }
    for(int i=0;i<n;i++){
        v[i]=v[i]%k;
    }
    int ans=1e9;
    for(int i=0;i<n;i++){
        ans=min(ans,k-v[i]);
    }

    if(ans==k) ans=0;
  cout<<ans<<endl;
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