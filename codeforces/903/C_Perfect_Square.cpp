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
void solve() {
    int n;
    cin>>n;
    vector<vector<char>> matrix(n,vector<char>(n));
       for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
        cin >> matrix[i][j];
        }
    }
    // vector<vector<char>> rotatedMatrix(n,vector<char>(n));
    //   for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         rotatedMatrix[i][j] = matrix[n - 1 - j][i];
    //     }
    // }
    int cnt=0;
    for(int l=0;l<n;l++){
   for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(matrix[i][j]!=matrix[n-1-j][i]){
            cnt +=(abs(matrix[i][j]-matrix[n-1-j][i]));
           matrix[n-1-j][i]= max(matrix[i][j],matrix[n-j-1][i]);
           matrix[i][j]= max(matrix[i][j],matrix[n-j-1][i]);
            }
        }
    }
    }
    
    cout<<cnt<<endl;
// for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cout<< matrix[n - 1 - j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
    

  
}

int32_t main() {
#ifdef ONPC
    freopen("input", "r", stdin);
#endif
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
#ifdef MULTITEST
     cin >> t;
#endif
    while (t--) {
        solve();
    }

    return 0;
}


// -'0' for string to integer
// *1LL for overflow
// multiset duplicate