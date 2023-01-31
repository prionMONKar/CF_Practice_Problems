#include"bits\stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,ok=1;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        string s;cin>>s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j] && s[i]!=s[j]){
                    ok=0;
                    break;
                }
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}