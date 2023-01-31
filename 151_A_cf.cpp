#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,k,l,c,d,p,nl,np;
    //cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int j = (k*l)/nl;
    int m = c*d;
    int o = p/np;
    //cout<<(min(j,m,o)/n)<<endl;
    printf("%d\n",(min(min(j,m),o)/n));
    return 0;
}