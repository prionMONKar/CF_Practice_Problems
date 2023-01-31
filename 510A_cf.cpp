#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,m;
    cin>>n>>m;
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2 == 0){
                if((i/2)%2 != 0){
                    if(j<m){
                        cout<<".";
                    }
                    else{
                        cout<<"#";
                    }
                }
                else{
                    if(j == 1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
}