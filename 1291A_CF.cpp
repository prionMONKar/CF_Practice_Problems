#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie();cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s,s1;cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9') s1+=s[i];
            if(s1.size()==2) break;
        }
        if(s1.size()==2) cout<<s1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}