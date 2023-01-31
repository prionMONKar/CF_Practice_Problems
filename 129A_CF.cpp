#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,sum=0,sum1=0,sum3=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(n==1){
        if((arr[0]%2)%2==0) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    else{
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                sum1 += arr[i]+arr[i+1];
                if(((sum-sum1)%2)%2==0) sum3+=sum1;
                else{
                    if(arr[i] != arr[i+1]) sum1=0;
                }
            }
            else{
                if(((sum-arr[i])%2)%2==0) sum3+=1;
            }
        }
        cout<<sum3<<endl;
    }
    return 0;
}