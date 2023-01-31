#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    string s;cin>>s;
    int flag = 1;
    for(int i=1;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z') flag=0;
        else continue;
    }
    if(flag){
        if(s[0]>='a' && s[0]<='z') s[0] = toupper(s[0]);
        else s[0] = tolower(s[0]);
        for(int i=1;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
        cout<<s;
    }
    else cout<<s;
    return 0;
}