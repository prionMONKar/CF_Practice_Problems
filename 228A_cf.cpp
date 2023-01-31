#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long s[4];
    int count = 0;
    for(int i=0;i<4;i++){
        cin>>s[i];
    }
 
    for(int i=0;i<4;i++){
    	for(int j=i+1;j<4;j++){
	        if(s[i] == s[j]){
	            count++;
	            break;
	        }
    	}
    }
 
    cout<<count;
    cout<<endl;
    return 0;
 
}