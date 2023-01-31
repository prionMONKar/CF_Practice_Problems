#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        d = d-(min(d/c,a)*c);
        if(d<=b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}