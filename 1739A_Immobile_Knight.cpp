#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        if(n==1 || m==1) cout<<n<<" "<<m;
        else if(n==2 && m<3) cout<<n<<" "<<m;
        else if(n==2&&m>=3) cout<<1<<" "<<2;
        else if(n==3 && m<2) cout<<n<<" "<<m;
        else if(n==3 && m==2) cout<<2<<" "<<1;
        else if(n==3 && m==3) cout<<2<<" "<<2;
        else if(n==3 && m>3) cout<<n<<" "<<m;
        else if(n>=4) cout<<n<<" "<<m;
        cout<<endl;
    }
    return 0;
}