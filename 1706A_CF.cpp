#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        char s[m] = {0};
        for(int i=0;i<n;i++){
            int l = m+1-arr[i];
            if(arr[i] < l){
                if(s[arr[i]-1] != 1){
                    s[arr[i]-1] = 1;
                }
                else{
                    s[l-1] = 1;
                }
            }
            else if(arr[i] == l){
                s[arr[i]-1] = 1;
            }
            else{
                if(s[l-1] != 1){
                    s[l-1] = 1;
                }
                else{
                    s[arr[i]-1] = 1;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(s[i] != 1){
                s[i] = 'B';
            }else{
            	s[i] = 'A';
            }
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}