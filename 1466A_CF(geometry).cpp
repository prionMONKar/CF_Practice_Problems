#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

/*int solve(int n,vector<int> arr){
    set<double> areas;
    for(int i : arr){
        for(int j : arr){
            if(i>=j) continue;
            double a = (j-i)/2.0;
            areas.insert(a);
        }
    }
    return areas.size();
}*/
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;++i) cin>>arr[i];
        set<double> areas;
        for(int i : arr){   //for(int i=0;i<n;i++){
            for(int j : arr){   //for(int j=0;j<n;j++){
                if(i>=j) continue;  //if(arr[i] >= arr[j]) continue;
                double a = (j-i)/2.0;   //double a = (arr[j]-arr[i])/2.0;
                areas.insert(a);
            }
        }
        cout<<areas.size()<<endl;
    }
    return 0;
}