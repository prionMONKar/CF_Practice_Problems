#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,sum=0,sum1=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        sum1=sum1+sum;
        if(sum1==n){
            cout<<i;
            break;
        }
        else if(sum1>n){
            cout<<(i-1);
            break;
        }
    }
    cout<<endl;
    return 0;
}