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
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<pair<int,int>>ans;
    
    if(n==1){
        cout<<0<<endl;
    }
    else{
            cout<<n-1<<endl;
            cout<<1<<" "<<n<<endl;
        int temp= (arr[0]+arr[n-1])%2==1 ? arr[0]:arr[n-1];
        for(int i=1;i<n-1;i++){
            if((temp +arr[i])&1==1){
                cout<<1<<" "<<i+1<<endl;
            }
            else{
                cout<<i+1<<" "<<n<<endl;
            }
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