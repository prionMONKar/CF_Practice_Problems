#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,cnt=0,cnt1=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>0) cnt+=arr[i];
        if(arr[i]<0){
            cnt1++;
            if(cnt>0){
                cnt--;
                cnt1--;
            }
        }
    }
    cout<<cnt1<<endl;
    return 0;
}