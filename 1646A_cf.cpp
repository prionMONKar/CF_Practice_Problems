#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long s;
        cin>>n>>s;

        cout<<(int)s/pow(n,2)<<endl;
    }
    return 0;
}