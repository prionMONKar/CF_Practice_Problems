#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,min=INT_MAX;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if((arr[i+1]-arr[i])<min) min=arr[i+1]-arr[i];
        }
        cout<<min<<endl;
    }
    return 0;
}