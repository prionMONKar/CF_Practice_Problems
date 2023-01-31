#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(arr[n-1] >= arr[0]+arr[1]) cout<<"1 2"<<" "<<n<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}