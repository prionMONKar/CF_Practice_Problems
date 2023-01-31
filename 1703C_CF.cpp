#include<bits/stdc++.h>
 
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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
int main(){
	fastio;
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
 
		fr(n) cin>>arr[i];
 
		fr(n){
			int k;
			cin>>k;
			string s;
			cin>>s;
			int cnt=0,cnt1=0;
			frj(k){
				if(s[j] == 'U') cnt++;
				else cnt1++;
			}
			arr[i]=(arr[i]-cnt+cnt1)%10;
		}
		fr(n){
			if(arr[i]<0) cout<<arr[i]+10<<" ";
			else cout<<arr[i]<<" ";
		}
		nll;
	}
	return 0;
}



int main()
{
	fastio;
	int t, cnt=1;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		fr(n) cin>>arr[i];
		fr(n){
			ll sz;
			cin>>sz;
			string s;
			cin>>s;
			frj(sz){
				if(s[j]=='U') arr[i]=(arr[i]-1+10)%10;
				else arr[i]=(arr[i]+1)%10;
			}
		}
		fr(n) cout<<arr[i]<<" "; nll;
	}
	return 0;
}