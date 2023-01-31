#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == '*'){
                l=i;
                k=j;
                arr[i][j]=1;
            }
            if(arr[i][j] == '*' && arr[i][j]!=1){
                o=i;
                p=j;
                arr[i][j]=2;
            }
            if(arr[i][j] == '*' && arr[i][j]!=1 && arr[i][j]!=2){
                q=i;
                r=j;
            }
        }
    }
    if(l==o && k==r) cout<<q<<" "<<p<<endl;
    else if(k==p && o==q) cout<<l<<" "<<r<<endl;
    else if(l==o && p==r) cout<<k<<" "<<r<<endl;
    else if(k==r && o==q) cout<<l<<" "<<p<<endl;
    return 0;
}