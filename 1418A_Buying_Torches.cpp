#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        ll x,y,k;cin>>x>>y>>k;
        long double rqrd_stick_for_coal=y*k;
        long double total_stick = rqrd_stick_for_coal+k-1;
        ll ans = ceil(total_stick/(x-1));
        cout<<ans+k<<endl;
    }
    return 0;
}