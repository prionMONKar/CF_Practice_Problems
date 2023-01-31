#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        if(n&1) cout<<n/2<<endl;
        else cout<<(n/2)-1<<endl;
    }
    return 0;
}