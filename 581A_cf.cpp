#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int a,b;
    //cin>>a>>b;
    scanf("%d %d",&a,&b);
 
    if(a<b){
        int l = (b-a)/2;
        //cout<<a<<" "<<l;
        printf("%d %d",a,l);
    }
    else{
        int l = (a-b)/2;
        //cout<<b<<" "<<l;
        printf("%d %d",b,l);
    }
    //cout<<endl;
    printf("\n");
    return 0;
}