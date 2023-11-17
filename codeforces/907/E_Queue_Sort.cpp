#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long countPairs(const vector<long long>& arr) {
    int n = arr.size();
    unordered_map<long long, long long> freq;

    long long result = 0;

    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }
    for(auto it : freq){
        result += (it.second * (it.second - 1) / 2);
    }
    int temp = freq[1]+freq[2];
    result += (temp * (temp - 1) / 2);
    

    return result;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        long long result = countPairs(arr);
        cout << result << endl;
    }

    return 0;
}
