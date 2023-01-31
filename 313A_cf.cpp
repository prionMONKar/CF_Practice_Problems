#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;
    cin>>n;
    if(n>0){
        cout<<n;
    }
    else{
        int l = n%10;
        int k = n/10;
        int k = k%10;
        if(k<l){
            int j = n/10-k+l;
            cout<<j<<endl;
        }
        else{
            int j = n/10;
            cout<<j<<endl;
        }
    }
    return 0;
}