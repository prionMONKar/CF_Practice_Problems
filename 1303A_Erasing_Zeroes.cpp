#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long t;cin>>t;
    while(t--){
        long long first_pos=0,Last_pos=0,ans=0;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                first_pos=i;break;
            }
        }
        for(int i=s.size()-1;i>=first_pos;i--){
            if(s[i]=='1'){
                Last_pos=i;break;
            }
        }
        for(int i=first_pos;i<Last_pos;i++){
            if(s[i]=='0') ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}