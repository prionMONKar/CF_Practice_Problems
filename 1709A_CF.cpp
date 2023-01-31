#include "bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main()
{
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int arr[3];
        int cnt=1;
        for(int i=0;i<3;i++){
            cin>>arr[i];
            if(arr[i] == i+1){
                cnt=0;
            }
        }
        if(arr[x-1] == 0) cnt=0;
        if(cnt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}