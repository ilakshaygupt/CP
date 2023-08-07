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
    map<int,int> mp;
    set<int>s;
    int n;
    cin>>n;
    int size=(n*(n-1))/2;
    vector<int>arr(size);
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    mp[arr[i]]++;
    s.insert(arr[i]);
    }
    int temp=n-1;
    
    for(auto it : s) {
        while(mp[it]>0)
        {   
            mp[it]=mp[it] -temp;
            cout<<it<<" ";
            temp--;


        }
    }
    cout<<*max_element(arr.begin(),arr.end())<<endl;
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