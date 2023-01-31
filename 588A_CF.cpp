#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,a,b,sum=0,price=101;cin>>n;
    //vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        //cin>>v[i].first>>v[i].second;
        cin>>a>>b;
        //if(v[i].second < price){
            //price = v[i].second;
        //}
        //sum += v[i].first*price;
        if(b < price){
            price = b;
        }
        sum += a*price;
    }
    cout<<sum<<endl;
}