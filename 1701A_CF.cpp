#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int arr[2][2],cnt=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(arr[i][j] == 1) cnt++;
            }
        }
        if(cnt == 4) cout<<"2"<<endl;
        else if(cnt == 0) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}