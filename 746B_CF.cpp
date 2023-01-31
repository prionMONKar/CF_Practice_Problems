#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    string s,s1;cin>>s;
    while(n!=0){
        if(s.size()&1) s1.push_back(s[0]);
        else s1.insert(s1.begin(),s[0]);
        s.erase(0,1);
        n = s.size();
    }
    cout<<s1;
    return 0;
}