#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,k;
    cin>>n;

    for(int i=4;i<1000000;i++){
        for(int j=2;j<=9;j++){
            if(n%i == 0){
                if((i%j == 0) && ((n-i)%j == 0)){
                    l = i;
                    k = (n-i);
                }
            }
        }
    }
    cout<<l<<" "<<k;
    cout<<endl;
    return 0;
}