#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%3 == 0){
            for(int i=0;i<n/3;++i) cout<<"21";
        }
        else if(n%3 == 1){
            cout<<"1";
            for(int i=0;i<n/3;++i) cout<<"21";
        }
        else{
            cout << "2";
            for(int i=0;i<n/3;++i) cout<<"12";
        }
        cout<<endl;
    }
    return 0;
}