#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>

using namespace std;

typedef long long ll;
typedef long double ld;

#define MULTITEST
void solve() {
    string s;
    cin>>s;
    
    int ans=0;
    string temp=s;
    vector<int> a;
    for(int i=s.size()-1;i>0;i--)
    {
      if(s[i]>='5'  )
      {
        
    s[i]='0';
    s[i-1]=s[i-1]+'1';
    temp=max(temp,s);
        
      }
      else {
        s[i]='0';
        temp=max(temp,s);

      }
      
       
        }


        if(s[0]>=5)
        {
            s[0]=0;
            s=to_string('1'+s);
            temp=max(temp,s);
        }
    cout<<temp<<endl;
  
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