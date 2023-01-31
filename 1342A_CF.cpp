#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    while(n--){
        int x,y,a,b;cin>>x>>y>>a>>b;
        cout<<min(x,y)*b + (max(x,y)-min(x,y))*a<<endl;
    }
    return 0;
}