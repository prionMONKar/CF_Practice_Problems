#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0,c=0,d=0,count=0;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] == '4'){
            a++;
        }
        else if(arr[i] == '1'){
            b++;
        }
        else if(arr[i] == '3'){
            c++;
        }
        else if(arr[i] == '2'){
            d++;
        }
    }

    if(b<=c){
        count=count+c;
    }
    else{
        count=count+b;
    }
    
    if(d<=4){
        count=count+1;
    }
    else{
        count=count+(d/4)+1;
    }
    count=count+a;
    cout<<count<<endl;
    return 0;
}