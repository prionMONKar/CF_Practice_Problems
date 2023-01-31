#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,x,ans=2,cnt=1;cin>>n>>x;
        while(ans<n){
            ans+=x;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}