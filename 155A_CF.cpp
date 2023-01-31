#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,cnt=0,cnt1=0,ok=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        cnt=0,cnt1=0;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]) cnt++;
            else if(arr[i]<arr[j]) cnt1++;
        }
        if(cnt==i || cnt1==i) ok++;
    }
    cout<<ok-1<<endl;
}