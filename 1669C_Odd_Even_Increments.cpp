#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,odd=0,odd1=0,even=0,even1=0;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(i&1){
                if(arr[i]&1) odd++;
                else even++;
            }
            else{
                if(arr[i]&1) odd1++;
                else even1++;
            }
        }
        if((odd>0 && even>0) || (odd1>0 && even1>0)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}