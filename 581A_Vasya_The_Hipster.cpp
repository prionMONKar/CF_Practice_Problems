#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int k,l;cin>>k>>l;
    cout<<min(k,l)<<" "<<abs(k-l)/2<<endl;
    return 0;
}