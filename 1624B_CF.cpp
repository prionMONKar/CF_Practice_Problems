#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        puts((2*b-a>0 && ((2*b-a)%c) == 0 || (2*b-c > 0 && ((2*b-c)%a)==0) || ((a+c)%(2*b) == 0))?"Yes":"No");
        /*if(2*b-a>0 && ((2*b-a)%c) == 0 || (2*b-c > 0 && ((2*b-c)%a)==0) || ((a+c)%(2*b) == 0)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }*/
        //cout<<endl;
    }
    return 0;
}