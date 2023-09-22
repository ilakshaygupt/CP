#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> h(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int maxLength = 0;
        int left = 0;
        long long sumFruits=0;
        //  sumFruits = h[0]%h[1]==0?h[0]+h[1]:h[1] ;
        


        for (int pointer = 0; pointer < n-1; pointer++) {
            if( h[pointer] % h[pointer +1] == 0) sumFruits += a[pointer];

            else{
                sumFruits=a[pointer];
                left=pointer;
            }


            while (sumFruits > k) {
                sumFruits -= a[left];
                left++;
            }

            if (sumFruits <= k) {
                maxLength = max(maxLength, pointer - left + 1);
            }
        }

        cout << maxLength << endl;
    }

    return 0;
}
