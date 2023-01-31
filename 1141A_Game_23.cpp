#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int n,cnt=0,ok=1,m;cin>>n>>m;
    if(m%n!=0) cout<<-1<<endl;
    else{
        if(m/n<2) cout<<0<<endl;
        else{
            ll k = m/n;
            while(k!=0){
                if(k%3==0){
                    k=k/3;
                    cnt++;
                }
                else if(k%2==0){
                    k=k/2;
                    cnt++;
                }
                else{
                    ok=0;
                    break;
                }
            }
            if(ok) cout<<cnt<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}