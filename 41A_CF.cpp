#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    string s,s1;cin>>s>>s1;
    reverse(s.begin(),s.end());
    if(s==s1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}