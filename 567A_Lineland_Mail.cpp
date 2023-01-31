#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    ll t;cin>>t;
    ll arr[t];
    for(int i=0;i<t;i++) cin>>arr[i];
    for (int i=0;i<t;i++) {
        if(i==0) cout<<arr[1]-arr[0]<<" "<<arr[t-1]-arr[0]<<endl;
        else if(i==t-1) cout<<arr[t-1]-arr[t-2]<<" "<<arr[t-1]-arr[0]<<endl;
        else cout<<min(arr[i+1]-arr[i],arr[i]-arr[i-1])<<" "<<max(arr[i]-arr[0],arr[t-1]-arr[i])<<endl;
    }
    return 0;
}