#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int count=0;
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s1.size();j++){
            if(s[i]==s1[j]){
                count++;
            }
        }
    }
    if(count == 0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
    return 0;
}


//alternative
#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int count=0;
    string s,s1,s2,s3,s4,s5;
    cin>>s;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    cin>>s5;
    for(int i=0;i<s.size();i++){
        if(s[i]==s1[i] || s[i]==s2[i] || s[i]==s3[i] || s[i]==s4[i] || s[i]==s5[i]){
            count++;
        }
    }
    if(count == 0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
    return 0;
}