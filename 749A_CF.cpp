#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    if(n&1){
        int k = (n/2)-1;
        cout<<k+1<<endl;
        while(k--) cout<<"2"<<" ";
        cout<<"3";
    }
    else{
        int k = n/2;
        cout<<k<<endl;
        while(k--) cout<<"2"<<" ";
    }
    return 0;
}