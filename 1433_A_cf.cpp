#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int j=n%10;
        int k=(j-1)*10;
        while(n!=0){
            n=n/10;
            count++;
        }
        /*if(count==1){
            cout<<(k+count);
        }
        else if(count==2){
            cout<<(k+count+1);
        }
        else if(count==3){
            cout<<(k+count+3);
        }
        else if(count==4){
            cout<<(k+count+6);
        }*/
        int l = k + ((count*(2+(count-1)))/2);
        cout<<l;
        cout<<endl;
    }
    return 0;
}