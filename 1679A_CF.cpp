#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long min;
        if(n&1 || n<=3) cout<<"-1"<<endl;
        else{
            min = n/6;
        	if(n%6!=0) min++;
            cout<<min<<" "<<n/4<<endl;
        }
    }
    return 0;
}