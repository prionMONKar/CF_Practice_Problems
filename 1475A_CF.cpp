#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long t,ok=1;cin>>t;
    while(t--){
        long long n;cin>>n;
        if(n&(n-1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}