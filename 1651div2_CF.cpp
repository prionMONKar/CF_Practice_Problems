#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<(1ll<<n)-1<<endl;
    }
    return 0;
}