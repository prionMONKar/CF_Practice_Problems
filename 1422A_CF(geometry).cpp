#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++) cin>>arr[i];
        sort(arr,arr+3);
        cout<<(arr[1]-arr[0])+arr[2]<<endl;
    }
    return 0;
}