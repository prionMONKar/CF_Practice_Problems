#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,count=1,count1 = INT_MIN;
    cin>>n;
    vector<int> v;
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        v.push_back(input);
    }
    for(int i=0;i<n;i++){
        if(v[i] > v[i-1]){
        	count++;
        }
        else{
            if(count > count1){
                count1 = count;
            }
            count=1;
        }
    }
    if(count < count1){
    	count = count1;
    }
    if(n==1){
        cout<<"1"<<endl;
    }
    else{
        cout<<count<<endl;
    }
    return 0;
}