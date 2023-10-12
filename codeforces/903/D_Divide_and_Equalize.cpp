#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;


map<long long, long long> countPrimeOccurrences(vector<long long>& a) {
    map<long long, long long> primeCounts;
        for (long long number : a) {
        long long n = number;
        for (long long d = 2; d * d <= n; d++) {
            while (n % d == 0) {
                primeCounts[d]++;
                n /= d;
            }
        }
        if (n > 1) {
            primeCounts[n]++;
        }
    }
    
    return primeCounts;
}

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        map<long long, long long> primeCounts = countPrimeOccurrences(a);
        
        bool possible = true;
        for (auto it = primeCounts.begin(); it != primeCounts.end(); ++it) {
            if (it->second % n != 0) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
