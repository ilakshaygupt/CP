#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

typedef long long ll;
typedef long double ld;

bool isGood(string s){
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            return false;
        }
    }
    return true;
}
#define MULTITEST
void solve() {
  int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;

        
        bool a = isGood(s);
        bool b = isGood(t);
        if (a) {
            cout << "Yes" << endl;
            return;
        } 
        else if(!b and !a){
            cout <<"No"<<endl;
            return;
        }
        else{
            int se=t[0], ea=t[t.length()-1];
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    if(se==s[i] or ea==s[i+1]){
                    cout<<"No"<<endl;
                    return;
                }
                }
                
            }
            cout<<"Yes"<<endl;
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