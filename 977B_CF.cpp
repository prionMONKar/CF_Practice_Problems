#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
string s;
int frequencyofSubString(string sub){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==sub[0] && s[i+1]==sub[1]) cnt++;
    }
    return cnt;
}
int main(){
    FAST_IO;
    int maxi=0,n;cin>>n;
    string sub,ans;cin>>s;
    for(int i=0;i<s.size();i++){
        sub = s.substr(i,2);
        int cnt = frequencyofSubString(sub);
        if(cnt > maxi){
            maxi = cnt;
            ans = sub;
        }
    }
    cout<<ans<<endl;
    return 0;
}