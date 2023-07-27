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

bool customComparator(const pair<int, int>& p1, const pair<int, int>& p2) {
    if (p1.first == 0 && p2.first != 0) {
        return true;
    } else if (p1.first != 0 && p2.first == 0) {
        return false;
    } else if (p1.first == 0 && p2.first == 0) {
        return p1.second < p2.second;
    }

      if(p1.first == p2.first) {
        return p1.second < p2.second;
    }
    else if(p1.first<p2.first)
        return false;

    return true;

}


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> health_points(n);
    for (int i = 0; i < n; i++) {
        cin >> health_points[i];
    }

    vector<pair<int, int> > monster_set; // {health, index} pair, sorted by health (ordered set)
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        health_points[i] %= k;
        
        monster_set.push_back(make_pair(health_points[i], i));
    }

 

    sort(monster_set.begin(), monster_set.end(), customComparator);

    vector<pair<int, int> >::iterator it;
    for (it = monster_set.begin(); it != monster_set.end(); it++) {
        
            ans.push_back(it->second + 1);
        
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
#ifdef ONPC
    freopen("input", "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
#ifdef MULTITEST
    cin >> t;
#endif
    while (t--) {
        solve();
    }

    return 0;
}
