#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long t;cin>>t;
    while(t--){
        long long n,k = 9;cin>>n;
        for(long long i=0;i<n;i++){
            if(i==0){
                cout<<k;
                k--;
            }
            else{
                cout<<k;
                k++;
            }
            if(k==10) k=0;
        }
        cout<<endl;
    }
    return 0;
}