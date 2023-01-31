#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int cnt=1,s,n;cin>>s>>n;
    pair<int,int> arr[10000];
    for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(s>=arr[i].first){
            s = s+arr[i].second;
        }
        else{
            cnt=0;
            break;
        }
    }
    if(cnt) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}