#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int cnt=0,n,ans;cin>>n;
        int m = n*1;
        int len = (int)log10(n)+1;
        for(int i=0;i<len;i++){
            ans = m%10*pow(10,i);
            if(ans!=0) cnt++;
            m=m/10;
        }
        cout<<cnt<<endl;
        for(int i=0;i<len;i++){
            ans = n%10*pow(10,i);
            if(ans!=0) cout<<ans<<" ";
            if(n==0) break;
            else n=n/10;
        }
        cout<<endl;
    }
    return 0;
}