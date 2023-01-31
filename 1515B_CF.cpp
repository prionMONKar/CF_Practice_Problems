#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int isperfectsquare(int z){
    int m = floor(sqrt(z));
    if(sqrt(z)==m) return true;
    else return false;
}
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int z = n/2;
        if(isperfectsquare(z)){
            cout<<"YES"<<endl;
            continue;
        }
        if(n%4!=0){
            cout<<"NO"<<endl;
            continue;
        }
        z = n/4;
        if(isperfectsquare(z)){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}