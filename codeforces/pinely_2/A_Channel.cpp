#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string determine_read_status(int n, int a, int q, const string &notifications) {
    int min_subscribers_online = a;
    int max_subscribers_online = a;
  
    for (char notification : notifications) {
        if(min_subscribers_online>=n){
            return "YES";
        }
        if (notification == '+') {
            min_subscribers_online++;
            max_subscribers_online++;
        } else {
            min_subscribers_online = max(0, min_subscribers_online - 1);
        }
    }

    if (min_subscribers_online >= n) {
        return "YES";
    } else if (max_subscribers_online < n) {
        return "NO";
    } else {
        return "MAYBE";
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, a, q;
        cin >> n >> a >> q;
        string notifications;
        cin >> notifications;
        string result = determine_read_status(n, a, q, notifications);
        cout << result << endl;
    }

    return 0;
}
