#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include<climits>
#include<cmath>
using namespace std;

const int MAXN = 2e5 + 5;

vector<int> tree[MAXN];
vector<int> depth(MAXN, -1);
vector<bool> isMarked(MAXN, false);
int f[MAXN];

void dfs(int v, int d, int parent) {
    depth[v] = d;
    for (int u : tree[v]) {
        if (u != parent) {
            dfs(u, d + 1, v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= n; ++i) {
            tree[i].clear();
            depth[i] = -1;
            isMarked[i] = false;
            f[i] = 0;
        }

        for (int i = 0; i < k; ++i) {
            int a;
            cin >> a;
            isMarked[a] = true;
        }

        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        for (int i = 1; i <= n; ++i) {
            if (isMarked[i]) {
                dfs(i, 0, 0);
                break;
            }
        }

        long long ans = INT_MAX;

        for (int i = 1; i <= n; ++i) {
            long long maxDist = 0;
            for (int u : tree[i]) {
                if (depth[u] > depth[i]) {
                    maxDist = max(maxDist, depth[u]);
                }
            }
            f[i] = max(depth[i], maxDist);
            ans = min(ans, (long long) f[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}
