#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=h){
            count++;
        }
        else{
            count += 2;
        }
    }
    cout<<count<<endl;
    return 0;
}