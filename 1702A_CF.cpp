#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    	int n;
	    cin>>n;
	    int k = (int)log10(n)+1;
	    int l = pow(10,k-1);
	    cout<<n-l<<endl;
    }
    return 0;
}