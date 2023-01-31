#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int ok = 1;
    string n;cin>>n;
    for(int i=0;i<n.size();i++){
        if(s[i]=='1' && s[i+1] == '4' && s[i+2] == '4'){
            i += 2;
        }
        else if(s[i]=='1' && s[i+1] == '4'){
            i += 1;
        }
        else if(s[i]=='1'){
            continue;
        }
        else{
            ok = 0;
            break;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}