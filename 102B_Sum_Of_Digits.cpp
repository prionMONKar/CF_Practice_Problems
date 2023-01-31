#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int sum=0,cnt=0,x=11;
    string n;cin>>n;
    if(n.size()<2){
        cout<<0<<endl;
    }
    else{
        while(x>=10){
            x=0;
            for(int i=0;i<n.size();i++) x+=(n[i]-'0');
            n = to_string(x);
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}