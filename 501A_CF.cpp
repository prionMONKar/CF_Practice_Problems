#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long a,b,c,d;cin>>a>>b>>c>>d;
    if(max((3*a)/10,a-((a/250)*c)) > max((3*b)/10,b-((b/250)*d))) cout<<"Misha"<<endl;
    else if(max((3*a)/10,a-((a/250)*c)) < max((3*b)/10,b-((b/250)*d))) cout<<"Vasya"<<endl;
    else cout<<"Tie"<<endl;
    return 0;
}