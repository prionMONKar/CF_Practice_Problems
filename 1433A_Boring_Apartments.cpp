#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int k = int(log10(x)+1);
        x = x%10;
        if(k==1) cout<<10*(x-1)+1<<endl;
        else if(k==2) cout<<10*(x-1)+3<<endl;
        else if(k==3) cout<<10*(x-1)+6<<endl;
        else cout<<10*(x-1)+10<<endl;
    }
    return 0;
}