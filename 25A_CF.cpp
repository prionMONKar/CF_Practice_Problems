#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(arr[0]%2==0 && arr[1]%2==0){
        for(int i=0;i<n;i++){
            if(arr[i]%2 != 0){
                cout<<i+1;
                break;
            }
        }
    }
    else if(arr[0]%2!=0 && arr[1]%2!=0){
        for(int i=0;i<n;i++){
            if(arr[i]%2 == 0){
                cout<<i+1;
                break;
            }
        }
    }
    else{
        if(arr[n-1]%2==0 && arr[n-2]%2==0){
            for(int i=0;i<n;i++){
                if(arr[i]%2 != 0){
                    cout<<i+1;
                    break;
                }
            }
        }
        else if(arr[n-1]%2!=0 && arr[n-2]%2!=0){
            for(int i=0;i<n;i++){
                if(arr[i]%2 == 0){
                    cout<<i+1;
                    break;
                }
            }
        }
        else{
            if(arr[0]%2==0 && arr[n-1]%2==0){
                for(int i=0;i<n;i++){
                    if(arr[i]%2 != 0){
                        cout<<i+1;
                        break;
                    }
                }
            }
            else if(arr[0]%2!=0 && arr[n-1]%2!=0){
                for(int i=0;i<n;i++){
                    if(arr[i]%2 == 0){
                        cout<<i+1;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}