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
    int  n;
    cin>>n;
    vector<int> arr(2*n-1);
    for(int i=0;i<2*n-1;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int possAns;
    vector<int> checkVec;
     
    for(int i=0;i<2*n-1;i++){
        if(i==n-1){
            possAns=arr[n-1];
            continue;
        } 
        else checkVec.push_back(arr[i]);
        }
        
        int checkSame=1;
        n--;
        for(int i=0;i<n-1;i++){
            if(checkVec[i]!=checkVec[2*n-i-1])
            {
                checkSame=0;
                break;
            }

        }
        if(checkSame) cout<<"Case #"<<t<<": "<< possAns <<endl;
        else  cout<<"Case #"<<t<<": "<< -1 <<endl;
    
    
    

    // if(poss==-1) cout<<"Case #"<<t<<": "<< poss <<endl;
}

int32_t main() {
#ifdef ONPC
    freopen("input", "r", stdin);
#endif
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    long long t = 1;
#ifdef MULTITEST
     cin >> t;
     int c=1;
#endif
    while (t--) {
        solve(c++);
    }

    return 0;
}


// -'0' for string to integer
// *1LL for overflow
// multiset duplicate