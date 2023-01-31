#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,sum=0;cin>>n;
    int arr[n];
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(make_pair(arr[i],i+1));
    }
    sort(v.rbegin(),v.rend());
    
    for(int i=0;i<n;i++) sum += v[i].first*i + 1;
    cout<<sum<<endl;
    for(int i=0;i<n;i++) cout<<v[i].second<<" ";
    return 0;
}