#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int t;
cin>>t;

    for (int i = 0; i < t; i++) {
        int b, c, h;
        cin >> b >> c >> h; 
        int p=c+h;
       
        if(b==p)
        {
            cout<<2*b-1<<endl;
        }
        else if(b<p)
        {
            cout<<2*b-1<<endl;
        }
        else{
            cout<<2*p+1<<endl;
        }
        
    }

    return 0;
}
