#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,cnt=1,cnt1=0;cin>>n;
    string s,s1;cin>>s;
    for(int i=1;i<n;i++){
        cin>>s1;
        if(s==s1) cnt++;
        else{
            cnt1++;
            //s2=s1;
        }
    }
    if(cnt>=cnt1) cout<<s;
    else cout<<s1;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,mx=0;
    string s;
    cin>>n;
    map<string,int>mp;
    map<string,int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>mx){
            mx=it->second;
            s=it->first;
        }
    }
    cout<<s<<endl;


    return 0;
}

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