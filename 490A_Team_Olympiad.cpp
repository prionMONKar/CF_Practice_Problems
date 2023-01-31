#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    ll n,fg=0,gf=0,fo=0,ok=0,last=0,must=0,cnt=0,cnt1=0,cnt2=0;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==1) cnt++;
        if(arr[i]==2) cnt1++;
        if(arr[i]==3) cnt2++;
    }
    ll k = min(cnt,min(cnt1,cnt2));
    if(k==0) cout<<0<<endl;
    else{
        cout<<k<<endl;
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                if(arr[j]==1 && fg==0){
                    if(last==0 && must==0){
                        cout<<j+1<<" ";
                        must=1;
                    }
                    else if(last==0 && must!=0){
                        cout<<j+1<<" ";
                        last=1;
                    }
                    else cout<<j+1;
                    arr[j]=0;
                    ok++;
                    fg=1;
                }
                if(arr[j]==2 && gf==0){
                    if(last==0 && must==0){
                        cout<<j+1<<" ";
                        must=1;
                    }
                    else if(last==0 && must!=0){
                        cout<<j+1<<" ";
                        last=1;
                    }
                    else cout<<j+1;
                    arr[j]=0;
                    ok++;
                    gf=1;
                }
                if(arr[j]==3 && fo==0){
                    if(last==0 && must==0){
                        cout<<j+1<<" ";
                        must=1;
                    }
                    else if(last==0 && must!=0){
                        cout<<j+1<<" ";
                        last=1;
                    }
                    else cout<<j+1;
                    arr[j]=0;
                    ok++;
                    fo=1;
                }
                if(ok==3) break;
            }
            fg=0;last=0;
            gf=0;must=0;
            fo=0;
            ok=0;
            cout<<endl;
        }
    }
    return 0;
}