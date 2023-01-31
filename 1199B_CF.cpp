#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    double h,l;cin>>h>>l;
    cout<<fixed<<setprecision(13)<<(l*l-h*h)/(2*h)<<endl;
    return 0;
}