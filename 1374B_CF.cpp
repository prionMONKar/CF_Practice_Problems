#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long t;cin>>t;
    while(t--){
        long long n,cnt=0,ok=0;cin>>n;
        if(n==1) cout<<"0"<<endl;
        else{
            while(n%2==0){
                n/=2;
                ok++;
            }
            while(n%3==0){
                n/=3;
                cnt++;
            }
            if(n!=1 || ok>cnt) cout<<"-1"<<endl;
            else cout<<(cnt*2)-ok<<endl;
        }
    }
    return 0;
}