#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=2;i<10e9;i++){
            int k = pow(2,i)-1;
            if(n%k == 0){
                cout<<n/k<<endl;
                break;
            }
        }
    }
    return 0;
}