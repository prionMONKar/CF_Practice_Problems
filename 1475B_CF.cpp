#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n/2020 >= n%2020) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}