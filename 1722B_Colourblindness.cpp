#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,ok=1;cin>>n;
        string s,s1;cin>>s>>s1;
        for(int i=0;i<n;i++){
            for(int i=0;i<n;i++){
                if((s[i] == s1[i]) || (s[i]=='G'&&s1[i]=='B') || (s1[i]=='G'&&s[i]=='B')) continue;
                else ok=0;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}