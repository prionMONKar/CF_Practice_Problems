#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        if(abs(n-m)&1) cout<<"Burenka"<<endl;
        else cout<<"Tonya"<<endl;
    }
    return 0;
}