#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,ok=1;cin>>n;
        string s;cin>>s;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                for(int j=i+1;j<s.size();j++){
                    if(s[i]==s[j]){
                        ok=0;
                        break;
                    }
                }
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}