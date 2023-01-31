#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,m,k;
    cin>>n>>m>>k;
    if(n>m || n>k){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
    return 0;
}