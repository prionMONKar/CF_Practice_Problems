#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,cnt=0;cin>>n;
        for(int i=1;i<1667;i++){
            int k = i%10;
            if(i%3==0 || k==3) continue;
            else cnt++;
            if(cnt==n){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}