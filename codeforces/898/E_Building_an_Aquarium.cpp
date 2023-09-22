#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

bool canFilong (vector<long long>& height, long long h, long long x) {
    long long n = height.size();
    long long water = 0;

    for (long long i = 0; i < n; i++) {
        if (height[i] < h) {
            water += h - height[i] ;
        }
    }

    return water <= x;
}

long long maxAquariumHeight(vector<long long>& height, long long x) {
    long long left = 0;
    long long right = x+ *max_element(height.begin(),height.end());
    long long result = 0;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (canFilong (height, mid, x)) {
            result = mid;
            left = mid +1;
        } else {
            right = mid -1;
        }
    }

    return result;
}

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> height(n);
        for(long long i=0;i<n;i++) cin>>height[i];
        
        
long long maxHeight = maxAquariumHeight(height, x);
    cout <<  maxHeight << endl;
        

    }


    return 0;
}
