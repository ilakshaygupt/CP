#include <iostream>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int operations = 0;
        int prev_element = a[0];

        for (int i = 1; i < n; i++) {
            if (a[i] < a[i-1]) {
                int quot = a[i-1]/a[i];
                int position_difference;
                if(quot&(quot-1)==0){
                     position_difference = 31- __builtin_clz(quot);
                }
                else  position_difference =  32-__builtin_clz(a[i-1]/a[i]);
                a[i] = a[i]* pow(2,position_difference); 
                operations += (position_difference);
            }
            
        }

        cout << operations << endl;
    }

    return 0;
}