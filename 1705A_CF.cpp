#include<bits/stdc++.h>
using namespace std;
 
#define fr(n) for(int i=0; i<n; i++)
#define fro(n) for(int i=1; i<n; i++)
#define frj(n) for(int j=0; j<n; j++)
#define frr(n) for(int i=n; i>=0; i--)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int m = 2*n;
        int arr[m];
        fr(m){
        	cin>>arr[i];
        }
        sort(arr,arr+m);
        int cnt=1;
        fr(n){
            if(arr[i+n]-arr[i] < x) {cnt=0;break;}
        }
        if(cnt) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}