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
  int N, M;
    cin >> N >> M;
    vector<int> sellers(N);
    vector<int> buyers(M);

    for (int i = 0; i < N; ++i) {
        cin >> sellers[i];
    }

    for (int i = 0; i < M; ++i) {
        cin >> buyers[i];
    }

    // Binary search for the minimum integer X
    int left = *max_element(sellers.begin(), sellers.end());
    int right = *min_element(buyers.begin(), buyers.end());
    int answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int sellers_count = upper_bound(sellers.begin(), sellers.end(), mid) - sellers.begin();
        int buyers_count = M - (upper_bound(buyers.begin(), buyers.end(), mid) - buyers.begin());

        if (sellers_count >= buyers_count) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << endl;

}

int32_t main() {
#ifdef ONPC
    freopen("input", "r", stdin);
#endif
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
#ifdef MULTITEST
     
#endif
    while (t--) {
        solve();
    }

    return 0;
}


// -'0' for string to integer
// *1LL for overflow
// multiset duplicate