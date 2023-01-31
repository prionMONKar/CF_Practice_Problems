#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long a,b;
        scanf("%lld %lld",&a,&b);

        long long l = (((a/b)+1)*b) - a;
        if(b == l){
            printf("0");
        }
        else{
            printf("%lld",l);
        }
        printf("\n");
    }
    return 0;
}