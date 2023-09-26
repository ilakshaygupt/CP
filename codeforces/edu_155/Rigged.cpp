#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> athletes;
        int f=0,a=0,b=0;
        for (int i = 0; i < n; ++i) {
            int s, e;
            cin >> s >> e;

            if(!f){
                a=s;
                b=e;

                f=1;
                continue;
            }
            athletes.push_back({s, e});
        }
        sort(athletes.begin(), athletes.end());
        long long ans=-1;
       for(auto it:athletes){
           if(it.first<a and it.second>b){
            if(it.first==a) ans=-1;
               else ans=it.first+1;   
           }
           else if(it.first>a and it.second<b) ans =it.first+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
