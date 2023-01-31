#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        if(x>0) cnt++;
    }
    if(cnt==0 || cnt==1 || n-cnt==0 || n-cnt==1){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
    return 0;
}