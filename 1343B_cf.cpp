#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    //cin>>t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,sum=0,sum1=0;
        //cin>>n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            if(i%2 == 0){
                sum = sum + i;
            }
            else{
                sum1 = sum1 + i;
            }
        }
        sum1 = sum1 + (n+1);
        int l = sum1-sum;
        if(n == 2){
            //cout<<"NO";
            printf("NO");
        }
        else if(l%2 == 0){
            //cout<<"NO";
            printf("NO");
        }
        else{
            //cout<<"YES"<<endl;
            printf("YES\n");
            vector<long long> v;
            for(int i=1;i<=n;i++){
                if(i%2 == 0){
                    v.push_back(i);
                }
            }
            for(int i=1;i<=(n+1);i++){
                if(i%2 != 0){
                    if(i != l)
                    v.push_back(i);
                }
            }
            for(int i=0;i<n;i++){
                //cout<<v[i]<<" ";
                printf("%lld ",v[i]);
            }
        }
        //cout<<endl;
        printf("\n");
    }
    return 0;
}