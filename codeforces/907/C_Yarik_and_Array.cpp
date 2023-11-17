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
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    int l = 0;
    if (arr[0] & 1)
    {
        l = 1;
    }

    int sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (sum < 0)
        {
            sum = 0;
        }
        if (arr[i] & 1 && l == 1)
        {
            sum = arr[i];
        }
        else if (arr[i] & 1 && l == 0)
        {
            sum += arr[i];
            ans = max(ans, sum);
            l = 1;
        }
        else if (arr[i] % 2 == 0 && l == 1)
        {
            sum += arr[i];
            ans = max(ans, sum);
            l = 0;
        }
        else if (arr[i] % 2 == 0 && l == 0)
        {
            sum = arr[i];
        }
        ans = max(ans, sum);
    }
    if (ans == 0)
    {
        cout << *max_element(arr.begin(), arr.end()) << endl;
    }
    else
        cout << ans << endl;
}

int32_t main()
{
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
    while (t--)
    {
        solve();
    }

    return 0;
}

// -'0' for string to integer
// *1LL for overflow
// multiset duplicate