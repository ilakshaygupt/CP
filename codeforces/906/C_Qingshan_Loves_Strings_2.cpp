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
	string s;
	cin >> n >> s;
	int bal = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0')
			bal++;
		else
			bal--;
	}
	if (bal != 0) {
		cout << -1 << endl;
		return;
	}
	vector<int> ans ;
	int l = 0, r = n - 1;
	while(l < r) {
		if (s[l] != s[r]) {
			l++;
			r--;
			continue;
		}
		if (s[l] == '0') {
			s.insert(r + 1, "01");
			ans.push_back(r + 1);
			l++;r++;
		} else {
			s.insert(l, "01");
			ans.push_back(l);
			l++;r++;
		}
	}
	cout<<ans.size()<<endl;
	for (int x : ans)
		cout << x  << " ";
	cout << endl;
  
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