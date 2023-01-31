#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int m,n,count=0;
    cin>>m>>n;
    char a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y'){
                count++;
            }
        }
    }
    if(count > 0){
        cout<<"#Color";
    }
    else{
        cout<<"#Black&White";
    }
    cout<<endl;
    return 0;
}