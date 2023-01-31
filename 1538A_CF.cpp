#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n,k,l,ma,ma1,mi,mi1;
        cin>>n;
        k = INT_MIN;
        l = INT_MAX;
 
        vector<int> v;
        int input;
        for(int i=0;i<n;i++){
            cin>>input;
            v.push_back(input);
        }
        for(int i=0;i<n;i++){
        	k = max(v[i],k);
        	l = min(v[i],l);
        }
        for(int i=0;i<n;i++){
            if(v[i] == k){
                ma = i+1;
            }
            else if(v[i] == l){
                mi = i+1;
            }
            else{
            	continue;
            }
        }
        //cout<<ma<<" "<<mi<<endl;
        for(int i=n-1;i>=0;i--){
            if(v[i] == k){
                ma1 = n-i;
            }
            else if(v[i] == l){
                mi1 = n-i;
            }
            else{
            	continue;
            }
        }
        //cout<<ma1<<" "<<mi1<<endl;
        int a = max(ma,mi);
        int b = max(ma1,mi1);
        int c = min(ma,ma1) + min(mi,mi1);
        //cout<<a<<" "<<b<<" "<<c<<endl;
        int d = min(min(a,b),c);
        cout<<d<<endl;
    }
    return 0;
}