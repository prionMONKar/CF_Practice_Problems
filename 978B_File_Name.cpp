#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
	int n,cnt=0;cin>>n;
	string s;cin>>s;
	for(int i=0;i<n;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x') cnt++;
    }
    cout<<cnt<<endl;
	return 0;
}