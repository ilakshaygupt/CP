#include <iostream>
#include <string>

using namespace std;

int digitsum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int solve(int x, int k) {
    while (true) {
        int digitSum = digitsum(x);
        if (digitSum % k == 0) {
            return x;
        }
        x++;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, k;
        cin >> x >> k;
        int result = solve(x, k);
        cout << result << endl;
    }

    return 0;
}
