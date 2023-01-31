#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    if(n>=0) cout<<n<<endl;
    else{
        int a = n/10;
        int b = n/100*10 + n%10;
        cout<<max(a,b)<<endl;
    }
    return 0;
}