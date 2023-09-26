#include <iostream>
#include <vector>
#include <climits>

using namespace std;

typedef long long ll;
typedef long double ld;

#define MULTITEST
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> indemaxxor(n, INT_MIN);
    vector<int> index(n, -1);

    for (int i = 0; i < n; i++) {
        indemaxxor[i]=arr[i];
        for (int j = i; j < n; j++) {
            if(j==i) 
            {
                continue;
            }
            else if ((indemaxxor[i] & arr[j]) < indemaxxor[i]) break;
           
            indemaxxor[i] = max(indemaxxor[i], indemaxxor[i] & arr[j]);
            index[i] = j + 1;
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, g;
        cin >> l >> g;
        l--; 
        if (l < n && indemaxxor[l] >= g) {
            cout << index[l] << " ";
        } else {
            cout << -1 << " ";
        }
    }
    cout<<endl;
}

int main() {
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
