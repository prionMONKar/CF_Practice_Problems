#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int a,b,c;cin>>a>>b>>c;
    if(a==1 && b!=1 && c!=1) cout<<(a+b)*c;
    else if(a!=1 && b==1 && c!=1) cout<<(b+min(a,c))*max(a,c);
    else if(a!=1 && b!=1 && c==1) cout<<(c+b)*a;
    else if(a==1 && b==1 && c!=1) cout<<(a+b)*c;
    else if(a==1 && b!=1 && c==1) cout<<a+c+b;
    else if(a!=1 && b==1 && c==1) cout<<(c+b)*a;
    else if(a==1 && b==1 && c==1) cout<<c+b+a;
    else{
            cout<<a*b*c;
    }
    return 0;
}