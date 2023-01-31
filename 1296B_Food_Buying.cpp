#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,sum=0;cin>>n;
        while(n!=0){
            if(n<10){
                sum+=n;
                n=0;
            }
            else{
                int d=n/10;
                sum+=d*10;
                n=n%10;
                n+=d;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}