#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1,s2,s3;
    cin>>s>>s1>>s2;

    s3 = s+s1;

    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    
    if(s2 == s3){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    return 0;
}