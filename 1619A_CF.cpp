#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        string s,s1,s2;cin>>s;
        int k = s.size();
        if(k&1) cout<<"NO"<<endl;
        else{
            s1 = s.substr(0,k/2);
            s2 = s.substr(k/2);
            if(s1 == s2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}