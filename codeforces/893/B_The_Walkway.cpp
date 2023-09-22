#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <stack>
using namespace std;

typedef long long ll;
typedef long double ld;

#define MULTITEST
void solve() {
    int n,m,d;
    cin>>n>>m>>d;
    vector<int> a(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int eat=1;
    int cnt=1;
    
    stack<int>st;
    int index=0,pos=0;
    for(int i=1;i<=n;i++)
    {
    
        if(i==a[index])
        {
            cnt++;
            index++;
            pos=i;
        }
        if(i-pos>=d)
        {
            cnt++;
            pos=i;
        }
    }
    int ind=0;
    for(int i=0;i<m;i++)
    {
        
        if(eat>=a[ind])
        {
            eat=a[ind]+d;
            st.push(a[ind]);
            ind++;
            

        }
        else{
            eat+=d;
        }
    }
    cout<<cnt-1<<" "<<st.size()<<endl;
  
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