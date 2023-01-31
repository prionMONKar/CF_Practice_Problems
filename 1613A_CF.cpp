#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int x1,p1,x2,p2;cin>>x1>>p1>>x2>>p2;
        if(p1 == p2){
            if(x1==x2) cout<<"="<<endl;
            else if(x1>x2) cout<<">"<<endl;
            else cout<<"<"<<endl;
        }
        else{
            while(x1<=100000){
                if(p1==0) break;
                else{
                    x1*=10;
                    p1--;
                }
            }
            while(x2<=100000){
                if(p2==0) break;
                else{
                    x2*=10;
                    p2--;
                }
            }
            if(p1>p2) cout<<">"<<endl;
            else if(p2>p1) cout<<"<"<<endl;
            else{
                if(x1==x2) cout<<"="<<endl;
                else if(x1>x2) cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
        }
    }
    return 0;
}