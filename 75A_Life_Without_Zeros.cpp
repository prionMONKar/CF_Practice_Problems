#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    ll a,b;cin>>a>>b;
    ll sum=a+b;
    
    string k = to_string(a);
    string l = to_string(b);
    string m = to_string(sum);

    k.erase(remove(k.begin(),k.end(),'0'),k.end());
    l.erase(remove(l.begin(),l.end(),'0'),l.end());
    m.erase(remove(m.begin(),m.end(),'0'),m.end());

    ll num = stoi(k);
    ll num1 = stoi(l);
    ll num3 = stoi(m);
    
    if(num+num1 == num3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}