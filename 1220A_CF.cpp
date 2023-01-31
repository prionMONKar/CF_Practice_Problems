#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,cnt=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0;cin>>n;
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='n') cnt1++;
        else if(s[i]=='z') cnt4++;
    }
    for(int i=0;i<cnt1;i++) cout<<"1"<<" ";
    for(int i=0;i<cnt4;i++) cout<<"0"<<" ";
    return 0;
}