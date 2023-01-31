#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    ll t;cin>>t;
    while(t--){
        ll n,x,t;cin>>n>>x>>t;
        ll a=t/x;
        if(a<=n){
            ll ans=a*n;
            ans -= a*(a+1)/2;
            cout<<ans<<endl;
        }
        else cout<<((n-1)*n)/2<<endl;
    }
    return 0;
}