#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int ok=1;
        for(int i=0;i<n;i++){
            if(arr[i]%arr[0]) ok=0;
        }
        if(ok) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}