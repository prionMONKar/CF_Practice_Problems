#include"bits\stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        ll n;
        char c;
        cin>>n>>c;
        string s;cin>>s;
        s=s+s;
        ll dis=-1;
        for(int i=2*n-1;i>=n;i--){
            if(s[i]=='g') dis=i;
        }
        ll ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g') dis=i;
            if(s[i]==c) ans=max(ans,dis-i);
        }
        cout<<ans<<endl;
    }
    return 0;
}