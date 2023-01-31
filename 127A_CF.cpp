#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,k;cin>>n>>k;
    double sum=0;
    int x,y,x2,y2;cin>>x>>y;
    while(n--){
        cin>>x2>>y2;
        sum += sqrt(pow((x2-x),2)+pow((y2-y),2));
        x=x2;
        y=y2;
    }
    cout<<fixed<<setprecision(9)<<(sum*k)/50<<endl;
    return 0;
}