#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    ll t;cin>>t;
    while(t--){
        ll n,cnt=0,m;cin>>n>>m;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cnt+=arr[0]*2+1;
        for(int i=1;i<n-1;i++){
            cnt+=arr[i]*2+1-arr[i-1];
        }
        ll k = arr[n-2]*2+1;
        if(arr[n-1]>arr[n-2]) cnt+=k-arr[n-1]-arr[0];
        else cnt+=k/2+1-arr[0];
        if(cnt<=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}