#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
int solve(int i){
    int sum=0;
    while(i!=0){
        sum = sum+(i%10);
        i=i/10;
    }
    return sum;
}
int main(){
    FAST_IO;
    int i;
    cin>>i;
    while(solve(i)%4 != 0){
        i++;
    }
    cout<<i<<endl;
    return 0;
}