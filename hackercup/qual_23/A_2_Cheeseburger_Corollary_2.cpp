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
void solve(long long t) {
    long long ans=0;
    long long a,b,sum;
    cin>>a>>b>>sum;
    // long long tbuns=0;
    // tbuns+=(2*a);
    // tbuns+=(2*b);
    // long long tpattycheese=(a+2*b);
 
    
    cout<<"Case #"<<t<<": "<<endl;
   

  
}

int main() {
#ifdef ONPC
    freopen("input", "r", stdin);
#endif
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    long long t = 1;
#ifdef MULTITEST
     cin >> t;
#endif
long long c=1;
    while (t--) {
        
        solve(c++);
    }

    return 0;
}


// -'0' for string to long longeger
// *1LL for overflow
// multiset duplicate