#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,cnt=0,cnt1=0;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(i%2 != arr[i]%2){
                if(arr[i]%2!=0) cnt++;
                else cnt1++;
            }
        }
        if(cnt!=cnt1) cout<<-1<<endl;
        else cout<<cnt1<<endl;
    }
    return 0;
}