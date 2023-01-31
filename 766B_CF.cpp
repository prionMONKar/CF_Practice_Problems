#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long n,ok=1;cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        if((arr[i]+arr[i+1] > arr[i+2])){
            ok=0;
            break;
        }
    }
    if(ok) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}