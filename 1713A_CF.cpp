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
    int t,cnt=1;cin>>t;
    while(t--){
        int n;cin>>n;
        int max_x=0, max_y=0, min_x=0, min_y=0;
        fr(n){
            int x,y;
            cin>>x>>y;
            max_x = max(max_x,x);
            min_x = min(min_x,x);
            max_y = max(max_y,y);
            min_y = min(min_y,y);
        }
        cout<<2*(max_x+max_y-min_x-min_y)<<nl;
    }
    return 0;
}
