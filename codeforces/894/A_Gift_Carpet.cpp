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
    int n,m;
    cin>>n>>m;
    vector<string> carpet(n);
    for (int j = 0; j < n; ++j) {
        cin >> carpet[j];
    }
    int ans=0;
    int a=0,b=0,c=0,d=0;
    
    


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(carpet[j][i]=='v' and a==0){
                a=1;
                break;
            }
             if(carpet[j][i]=='i' and a==1 and b==0){
                b=1;
                break;;
            }
             if(carpet[j][i]=='k' and b==1 and a==1 and c==0)
            {
                c=1;
                break;;
            }
             if(carpet[j][i]=='a' and c==1 and b==1 and a==1){
                d=1;
                ans=1;
                break;;
            }
          
        }
    }
    if(ans==1) cout<<"YES"<<endl;
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