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
  vector<int> arr(3);
  for(int i=0;i<3;i++) cin>>arr[i];
  sort(arr.rbegin(),arr.rend());
  if(arr[0]==arr[1] && arr[1]==arr[2]) {
    cout<<"YES"<<endl;
    return;
  }
  int mini=arr[2];
  bool like=true;
  int c=0;
  if(arr[0]%arr[2]!=0 || arr[1]%arr[2]!=0) like=false;
  while(arr[0]!=arr[2]){
    if(arr[0]%arr[2]!=0 || c>3) {like=false;break;}
    arr[0]-=arr[2];
    c++;
  }
  while(arr[1]!=arr[2]){
    if(arr[1]%arr[2]!=0 || c>3) {like=false;break;}
    arr[1]-=arr[2];
    c++;
  }
  if(c>3) like=false;
  if(like) {
    cout<<"YES"<<endl;
  }
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