#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long n,b,d,sum=0,cnt=0;cin>>n>>b>>d;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i] > b) continue;
        else sum += arr[i];
        if(sum>d){
            sum=sum%10;
            cnt=sum/10;
        }
    }
    cout<<cnt<<endl;
    return 0;
}