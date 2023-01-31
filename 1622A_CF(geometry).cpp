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
        int ok=1;
        for(int i=0;i<3;i++){
            if(arr[0] + arr[1] == arr[2]) ok=0;
            else if(arr[0]==arr[1] && arr[2]%2==0) ok=0;
            else if(arr[1]==arr[2] && arr[0]%2==0) ok=0;
        }
        if(ok) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}