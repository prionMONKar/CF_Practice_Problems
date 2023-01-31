#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long n,m,a;cin>>n>>m>>a;
    if(n%a != 0) n=(n/a) + 1;
    else n=n/a;
    if(m%a != 0) m=(m/a) + 1;
    else m=m/a;
    cout<<n*m;
    return 0;
}