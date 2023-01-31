#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    map<string,string> mp;
    int n,m;cin>>n>>m;
    string s,s1;
    for(int i=0;i<m;i++){
        cin>>s>>s1;
        if(s.size() > s1.size()) mp[s] = s1;
        else mp[s] = s;
    }
    for(int i=0;i<n;i++){
        cin>>s;
        cout<<mp[s]<<" ";
    }
    return 0;
}