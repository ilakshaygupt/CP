#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>


using namespace std;

typedef long long ll;
#define LetsGo {ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define int ll
#define Test while(test--)

int power(int a, int b) {
    int ans = 1;
    while (b > 0) {
        if (b & 1) ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

int32_t main() {
    LetsGo
    int test = 1;
    cin >> test;
    Test {
        int n, k, x;
        cin >> n >> k >> x;
        int sum = 0, sum1 = 0;
        for(int i = n; i >= n - k + 1; i--){
            sum += i;
            sum1 += n - i + 1;
        }
        if(sum >= x && sum1 <= x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}