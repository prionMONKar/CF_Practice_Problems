#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int ok=1;
        string s,s1;cin>>s>>s1;
        for(int i=1;i<=s.size();i+=2){
            if(s[i] == s1[0]){
                ok=0;
                break;
            }
        }
        if(ok) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}