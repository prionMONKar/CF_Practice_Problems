#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,sum=0;
    cin>>n;
    string s;
    string s1;
    cin>>s;
    cin>>s1;
    string s2 = s+s1;
 
    for(int i=0;i<(s2.size()/2);i++){
        int l = max(s2[i],s2[n+i])-min(s2[i],s2[n+i]);
        int k = (10-max(s2[i],s2[n+i])) + min(s2[i],s2[n+i]);
        sum = sum + min(l,k);
    }
    cout<<sum;
    cout<<endl;
    return 0;
}