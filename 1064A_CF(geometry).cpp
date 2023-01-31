#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int arr[3];
    for(int i=0;i<3;i++) cin>>arr[i];
    sort(arr,arr+3);
    int k = arr[0]+arr[1];
    if(k <= arr[2]) cout<<(arr[2]+1)-k;
    else cout<<"0"<<endl;
    return 0;
}