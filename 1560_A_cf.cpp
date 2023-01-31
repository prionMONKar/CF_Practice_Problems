#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> v;
        for(int i=1;i<=k*2;i++){
            if(i%3 != 0){
	            if(i%10!=3){
	                v.push_back(i);
	            }
            }
        }
        for(int i=0;i<v.size();i++){
            if(i==(k-1)){
                cout<<v[i];
            }
        }
        cout<<endl;
    }
    return 0;
}