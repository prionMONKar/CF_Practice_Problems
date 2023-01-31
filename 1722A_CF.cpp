#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,ok=1;cin>>n;
        string s;cin>>s;
        string a = "Timur";
        sort(s.begin(),s.end());
        sort(a.begin(),a.end());
        if(n!=5) ok=0;
        else if(s != a) ok = 0;
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}