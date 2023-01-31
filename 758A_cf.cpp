#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,max = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    for(int i=0;i<n;i++){
        sum = sum + (max-a[i]);
    }
    if(n==1){
        cout<<"0"<<endl;
    }
    else{
        cout<<sum<<endl;
    }
    return 0;
}
