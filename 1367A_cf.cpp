#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        for(int i=0;i<s.size()-1;i+=2){
            cout<<s[i];
        }
        cout<<s[s.size()-1]<<endl;
    }
    return 0;
}