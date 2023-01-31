#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,maxi=1,cnt=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i-1]){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else cnt=1;
    }
    cout<<maxi<<endl;
    return 0;
}