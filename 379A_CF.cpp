#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    int m,n;
    cin>>m>>n;
    int sum = 0;
    int l;
    int k = m*n;
    while(m/n != 0){
        l = m/n;
        sum = sum + l;
        m = l + m%n;
    }
    cout<<sum+(k/n)<<endl;
    return 0;
}