#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define fr(m) for(int i=0; i<m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define frj(m) for(int j=0; j<m; j++)
#define frr(n) for(int i=n; i>=0; i--)
#define pb push_back
#define pf push_front
#define orr ||
#define nl '\n'
#define nll cout<<'\n'
#define mod 1000000007
#define inf (1LL<<62)
#define inff (1<<30)
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
 
int main(){
    fastio;
    int n,max_v=0,min_v=0,k,l;cin>>n;
    int arr[n];
    min_v = arr[0];
    fr(n){
        cin>>arr[i];
        max_v = max(max_v,arr[i]);
        min_v = min(min_v,arr[i]);
    }
    //cout<<max_v<<" "<<min_v<<endl;
    fr(n){
        if(arr[i] == max_v){
            k = i;
            break;
        }
    }
    frr(n){
        if(arr[i] == min_v){
            l = n-i-1;
            break;
        }
    }
    //cout<<k<<" "<<l<<endl;
    if(k>=n/2 && l>=n/2) cout<<(k+l)-1;
    else cout<<k+l;
    return 0;
}