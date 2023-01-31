#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n,sum=0;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum<=0 || (sum>0 && sum<n)) cout<<"1"<<endl;
        else cout<<sum-n<<endl;
    }
    return 0;
}