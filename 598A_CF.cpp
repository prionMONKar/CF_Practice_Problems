#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        long long n,sum;cin>>n;
        sum=n*(n+1)/2;//Acording to Gauss(sum 1 to 100 numbers-rule)
        for(int i=1;i<=n;i*=2) sum-=(2*i);
        cout<<sum<<endl;
    }
    return 0;
}