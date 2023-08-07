#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int v, const vector<vector<int>>& adj, vector<bool>& visited, vector<int>& strongVertices) {
    visited[v] = true;

    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u, adj, visited, strongVertices);
        }
    }

    strongVertices.push_back(v);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (a[i] - a[j] >= b[i] - b[j]) {
                    adj[i + 1].push_back(j + 1);
                }
                if (a[j] - a[i] >= b[j] - b[i]) {
                    adj[j + 1].push_back(i + 1);
                }
            }
        }

        vector<bool> visited(n + 1, false);
        vector<int> strongVertices;

        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                dfs(i, adj, visited, strongVertices);
            }
        }

        reverse(strongVertices.begin(), strongVertices.end());

        cout << strongVertices.size() << endl;
        for (int v : strongVertices) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
