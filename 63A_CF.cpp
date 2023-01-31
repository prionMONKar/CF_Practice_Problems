#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main()
{
    int n;cin>>n;
    string s,s1;
    vector<string> v,v1,v2,v3;
    while(n--){
        cin>>s>>s1;
        if(s1 == "rat") v.push_back(s);
        else if (s1 == "woman" || s1 == "child") v1.push_back(s);
        else if (s1 == "man") v2.push_back(s);
        else v3.push_back(s);
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
    for(int i=0;i<v1.size();i++) cout<<v1[i]<<endl;
    for(int i=0;i<v2.size();i++) cout<<v2[i]<<endl;
    for(int i=0;i<v3.size();i++) cout<<v3[i]<<endl;
    return 0;
}
#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    vector<string> v,v1,v2,v3;
    string s,s1;
    pair<string,string> mp;
    
    for(int i=0;i<t;i++){
        cin>>s>>s1;
        mp=make_pair(s,s1);
        if(mp.second=="rat") v.push_back(mp.first);
        if(mp.second == "woman" || mp.second == "child") v1.push_back(mp.first);
        if(mp.second == "man") v2.push_back(mp.first);
        if(mp.second == "captain") v3.push_back(mp.first);
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
    for(int i=0;i<v1.size();i++) cout<<v1[i]<<endl;
    for(int i=0;i<v2.size();i++) cout<<v2[i]<<endl;
    for(int i=0;i<v3.size();i++) cout<<v3[i]<<endl;
    return 0;
}