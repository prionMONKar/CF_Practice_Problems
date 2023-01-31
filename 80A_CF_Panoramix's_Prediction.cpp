#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
bool isprime(int m){
    bool flag=true;
    for(int i=2;i<=sqrt(m);i++){
        if(m%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}
int main(){
    FAST_IO;
    int n,m,ok=0;cin>>n>>m;
    for(int i=n+1;i<=m;i++){
        if(isprime(i)){
            if(i==m){
                cout<<"YES"<<endl;
                ok=1;
                break;
            }
            else{
                cout<<"NO"<<endl;
                ok=1;
                break;
            }
        }
    }
    if(!ok) cout<<"NO"<<endl;
    return 0;
}