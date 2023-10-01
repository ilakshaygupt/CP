#include <iostream>
#include <vector>
#include <climits>

using namespace std;
#define int long long
#pragma GCC optimize("O2")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
int mod=1e9+7;

int power(int x,int y){
    int value = 0;
    if(y<0) return 0;
    else if(y==0) return 1;
    else if(y==1) return x;
    else if(y%2) value = (x*(power((x*x)%mod,y/2)%mod))%mod;
    else value = power((x*x)%mod,y/2)%mod;
    return value%mod;
}

int inversemod(int x) {
    return power(x,mod-2)%mod;
}

void pp(int k){
    if(k==0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int low=(k*(k+1))/2;
        int i=n;
        int high=0;
        while(k--){
            high+=i;
            i--;
        }
        if(x>=low && x<=high){
            pp(1);
        }
        else{
            pp(0);
        }
    }
	// your code goes here
	return 0;
}
