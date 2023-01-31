#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min=INT_MAX;
        vector<int> v;
        int l;
        for(int i=0;i<n;i++){
            cin>>l;
            v.push_back(l);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            int k = v[i+1]-v[i];
            if(k<min){
                min = k;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}