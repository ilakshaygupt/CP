#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> weights(n);
        for (long long i = 0; i < n; ++i) {
            cin >> weights[i];
        }

        long long max_diff = 0;
        vector<long long> prefix_sum(n + 1, 0);
                for (long long j = 1; j <= n; ++j) {
                    prefix_sum[j] = prefix_sum[j - 1] + weights[j - 1];
                }
        for (long long k = 1; k < n; ++k) {
            if (n % k == 0) {
                
                vector<long long> diff(n/k, 0);
                for(long long i = 0; i < n/k; ++i){
                    diff[i] = prefix_sum[(i+1)*k] - prefix_sum[i*k];
                }
                max_diff = max(max_diff, *max_element(diff.begin(), diff.end()) - *min_element(diff.begin(), diff.end()));
                
            }
        }

        cout << max_diff << endl;
    }

    return 0;
}
