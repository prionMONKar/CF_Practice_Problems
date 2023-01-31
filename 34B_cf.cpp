#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,m,sum=0;
    cin>>n>>m;

    vector<int> v;
    int l;
    for(int i=0;i<n;i++){
        cin>>l;
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        if(v[i]<=0){
            sum = sum + v[i];
        }
    }
    if(sum<0){
        cout<<sum*(-1);
    }
    else{
        cout<<sum;
    }
    cout<<endl;
    return 0;
}

#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,m,sum=0;cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<m;i++){
        if(arr[i] < 0) sum += arr[i]*(-1);
    }
    cout<<sum<<endl;
    return 0;
}