#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,t;cin>>n>>t;
    int k = (int)log10(t)+1;
    if(k > n) cout<<"-1"<<endl;
    else if(k==n) cout<<t<<endl;
    else if(n>=2 && t==10){
        for(int i=0;i<n-1;i++){
            cout<<"1";
        }
        cout<<"0";
    }
    else{
        for(int i=0;i<n;i++){
            cout<<t;
        }
    }
    return 0;
}