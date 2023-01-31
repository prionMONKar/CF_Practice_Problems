#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'y' || s[i] == 'Y'){
                if(s[i+1] == 'e' || s[i+1] == 'E'){
                    if(s[i+2] == 's' || s[i+2] == 'S'){
                        cout<<"YES"<<endl;
                        break;
                    }
                    else{
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                else{
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}