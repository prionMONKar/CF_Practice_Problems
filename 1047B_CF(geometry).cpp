#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    int a,b,sum=0;
    for(int i=0;i<=n;i++){
        cin>>a>>b;
        sum = max(sum,(a+b));
    }
    cout<<sum<<endl;
    return 0;
}