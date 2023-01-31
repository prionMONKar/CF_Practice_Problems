#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t,sum=0;cin>>t;
    while(t--){
        string s;cin>>s;
        if(s=="Tetrahedron") sum+=4;
        else if(s=="Cube") sum+=6;
        else if(s=="Octahedron") sum+=8;
        else if(s=="Dodecahedron") sum+=12;
        else sum+=20;
    }
    cout<<sum<<endl;
    return 0;
}