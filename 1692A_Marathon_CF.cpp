#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++) cin>>arr[i];
        int k = arr[0];
        sort(arr,arr+4,greater<int>());
        for(int i=0;i<4;i++){
            if(arr[i]==k){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}