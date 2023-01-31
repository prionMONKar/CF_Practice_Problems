#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n,count=0,count1=0,sum=0;
        cin>>n;
        vector<int>v;
        int input;
        for(int i=0;i<n;i++){
            cin>>input;
            v.push_back(input);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i] == 1){
                count++;
            }
            else{
                count1++;
            }
            sum += v[i];
        }
        if(n%2 == 0){
            if(sum%2 == 0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            if(count == 0 && count1 != 0){
                if(count1%2 == 0){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else if(count != 0 && count1 == 0){
                if(count%2 == 0){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else if(count != 0 && count1 != 0){
                if(count%2 == 0){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
        }
    }
    return 0;
}