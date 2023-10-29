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
    vector<string> arr;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    
    map<string,int> mp;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]==0){
            mp[arr[i]]++;
            cout<<"OK"<<endl;
        }
        else{
            cout<<arr[i]<<mp[arr[i]]<<endl;
            mp[arr[i]]++;
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
    //  cin >> t;
#endif
    while (t--) {
        solve();
    }

    return 0;
}


// -'0' for string to integer
// *1LL for overflow
// multiset duplicate