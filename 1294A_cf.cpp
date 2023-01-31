#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long a[3],N;
        for(int i=0;i<3;i++){
            scanf("%ld",&a[i]);
        }
        scanf("%ld",&N);

        sort(a,a+3);
        N = N-(2*a[2]-a[1]-a[0]);
        
        if(N<0 || N%3!=0){
            printf("NO");
        }
        else{
            printf("YES");
        }
        printf("\n");
    }
    return 0;
}