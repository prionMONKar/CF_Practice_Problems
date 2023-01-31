#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long a,b,k;cin>>a>>b;
    if(a&1) k = (a/2)+1;
    else k=a/2;
    if(k>=b) cout<<(2*b)-1;
    else cout<<(b-k)*2;
    return 0;
}