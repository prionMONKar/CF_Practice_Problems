#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,count = 0,count1 = 0;
    cin>>n;
    pair<int,int> a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<n;i++){
        if(a[i].first > a[i].second){
            count++;
        }
        else if(a[i].first < a[i].second){
            count1++;
        }
    }
    if(count > count1){
        cout<<"Mishka";
    }
    else if(count1 > count){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    cout<<endl;
    return 0;
}