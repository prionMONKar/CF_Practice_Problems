#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int ok=1;
    string str;cin>>str;
    for(int i=0;i<str.size();i++){
        bool a = (str[i] == 'a' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'e');
        bool b = (str[i+1] == 'a' || str[i+1] == 'o' || str[i+1] == 'u' || str[i+1] == 'i' || str[i+1] == 'e');
        bool c = (str[i-1] == 'a' || str[i-1] == 'o' || str[i-1] == 'u' || str[i-1] == 'i' || str[i-1] == 'e');

        if(i == str.size()-1){
            if(str[i] == 'n' || (c && a)) continue;
            if (!(!c && a)){
                ok = false;
                break;
            }
        }
        else{
            if(str[i] == 'n') continue;
            if(!a && !b){
                ok = false;
                break;
            }
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}