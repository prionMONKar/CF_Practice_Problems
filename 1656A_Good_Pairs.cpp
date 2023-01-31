#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,k,p,max=INT_MIN,min=INT_MAX;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]>max) max=arr[i];
            else continue;
        }
        for(int i=0;i<n;i++){
            if(arr[i]<min) min=arr[i];
            else continue;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==max) k=i;
            if(arr[i]==min) p=i;
        }
        cout<<p+1<<" "<<k+1<<endl;
    }
    return 0;
}