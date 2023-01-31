#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,cnt=0,cnt1=0;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='L') cnt++;
        else if(s[i]=='R') cnt1++;
    }
    cout<<cnt+cnt1+1<<endl;
    return 0;
}