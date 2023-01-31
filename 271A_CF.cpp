#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int y;cin>>y;
    for(;;){
        y++;
        int a=y/1000;
        int b=(y/100)%10;
        int c=(y/10)%10;
        int d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) break;
    }
    cout<<y<<endl;
    return 0;
}