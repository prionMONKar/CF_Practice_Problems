#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        long long n,a,r;cin>>n;
        a = n/6;
        r = n%6;
        if(n<=6) cout<<"15"<<endl;
        else if(r==0) cout<<a*15<<endl;
        else if(r<=2) cout<<a*15+5<<endl;
        else if(r<=4) cout<<a*15+10<<endl;
        else cout<<(a+1)*15<<endl;
    }
    return 0;
}