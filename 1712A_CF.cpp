#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,cnt=0;cin>>n;
    string s,s1;
    while(n--){
        if(cnt != 0){
            cin >> s;
            if(s == s1) cnt += 1;
            else cnt -= 1;
        }
        else{
            cin >> s1;
            cnt = 1;
        }
    }
    cout<<s1<<endl;
    return 0;
}