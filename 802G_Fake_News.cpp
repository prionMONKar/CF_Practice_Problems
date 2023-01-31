#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int j=0;
    string s,s2="heidi";cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s2[j]){
            j+=1;
            if(j==5) break;
        }
    }
    if(j==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}