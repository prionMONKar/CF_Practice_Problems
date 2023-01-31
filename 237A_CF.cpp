#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    int x,y,x1,y1,cnt=1,maxi=0;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x==x1){
            if(y == y1) cnt++;
        }
        maxi = max(cnt,maxi);
        if(x!=x1 || ((x==x1)&&(y!=y1))) cnt=1;
        x1 = x;
        y1 = y;
    }
    cout<<maxi<<endl;
    return 0;
}