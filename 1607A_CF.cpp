#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int ok=1,sum=0;
        string s,s1;cin>>s>>s1;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[0]) continue;
            else ok=0;break;
        }
        if(ok) cout<<"0"<<endl;
        else{
            for(int i=1;i<s1.size();i++){
                sum += int(s1[i])-96;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}