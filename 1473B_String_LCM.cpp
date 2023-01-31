#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
string check(string s, int k){
     string r="";
     while(k--){
        r+=s;
    }
    return r;
}
int main(){
    FAST_IO;
    ll t;cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        ll g=gcd(s.length(),t.length());
        if(check(s,t.length()/g)==check(t,s.length()/g)) cout<<check(s,t.length()/g)<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}