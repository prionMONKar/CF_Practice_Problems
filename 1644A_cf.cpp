#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
    	int l,k,j,m,n,p;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='r'){
                l = i;
            }
            else if(s[i]=='R'){
                k = i;
            }
            else if(s[i]=='g'){
                j = i;
            }
            else if(s[i]=='G'){
                m = i;
            }
            else if(s[i]=='b'){
                n = i;
            }
            else if(s[i]=='B'){
                p = i;
            }
        }
        if(l<k && j<m && n<p){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}