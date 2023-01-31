#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,open=0,close=0,cnt=0;cin>>n;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && s[i+1]==')'){
                i++;continue;
            }
            if(s[i]=='(') open++;
            if(s[i]==')'){
                close++;
                if(open<close){
                    cnt++;
                    close--;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}