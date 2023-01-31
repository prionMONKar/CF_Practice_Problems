#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    ll t;cin>>t;
    while(t--){
        ll x,y,n;cin>>x>>y>>n;
        cout<<n-((n-y)%x)<<endl;
    }
    return 0;
}