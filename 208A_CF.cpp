#include"bits\stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int ok=1;
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(ok==0) cout<<" ";
            continue;
        }
        else{
            ok=0;
            cout<<s[i];
        }
    }
    return 0;
}