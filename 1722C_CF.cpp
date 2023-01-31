#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,cnt=2;cin>>n;
        string s;
        string arr[n],arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((arr[i] == arr1[j]) || (arr[i] == arr2[j])) cnt--;
                else if((arr[i] == arr1[j]) && (arr[i] == arr2[j])) cnt -= 2;
                cout<<cnt<<endl;
            }
        }

    }
    return 0;
}