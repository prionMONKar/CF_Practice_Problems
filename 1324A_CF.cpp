#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,a,b,c,d,ok=1;cin>>n>>a>>b>>c>>d;
        if(n*(a+b)<c-d || n*(a-b)>c+d) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
    }
    return 0;
}