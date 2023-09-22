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
   map<int,int> mp;
   vector<int> arr(n+1);
   vector<int> ans;
   for(int i=1;i<=n;i++)
   {
    if(mp.find(i)==mp.end())
    {
        ll temp =i;
        while(temp<=n)
        {
            mp[temp]=1;
            ans.push_back(temp);
            temp=temp*2;
        }

    }
   }
   for(auto it : ans)
    cout<<it<<" ";
    cout<<endl;

  
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