#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;




#define MULTITEST
void solve() {
  
		long long n,m,k;
		cin>>n>>m>>k;
        

		vector<long long>a(n);
        vector<long long>b(m);
        for(long long i=0;i<n;i++) cin>>a[i];
		for(long long i=0;i<m;i++) cin>>b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		if(a[0]<b.back()) swap(a[0],b.back());
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		if(k%2==0) if(b[0]<a.back()) swap(b[0],a.back());
		long long sum=0;
		for(long long x=0;x<n;x++)
		sum+=a[x];
		cout<<sum<<endl;
 
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