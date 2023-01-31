#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie()
int main(){
    FAST_IO;
    int n,k,sum=0;
    cin>>n;
    if(n>=100){
        k = n/100;
        n = n%100;
        sum += k;
        if(n>=20){
            k = n/20;
            n = n%20;
            sum += k;
        }
        else if(n>=10){
            k = n/10;
            n = n%10;
            sum += k;
        }
        else if(n>=5){
            k = n/5;
            n = n%5;
            sum += k;
        }
        else{
            k = n/1;
            n = n%1;
            sum += k;
        }
    }
    if(n>=20){
        k = n/20;
        n = n%20;
        sum += k;
        if(n>=10){
            k = n/10;
            n = n%10;
            sum += k;
        }
        else if(n>=5){
            k = n/5;
            n = n%5;
            sum += k;
        }
        else{
            k = n/1;
            n = n%1;
            sum += k;
        }
    }
    if(n>=10){
        k = n/10;
        n = n%10;
        sum += k;
        if(n>=5){
            k = n/5;
            n = n%5;
            sum += k;
        }
        else{
            k = n/1;
            n = n%1;
            sum += k;
        }
    }
    if(n>=5){
        k = n/5;
        n = n%5;
        sum += k;
        if(n>=1){
            k = n/1;
            n = n%1;
            sum += k;
        }
    }
    if(n>=1){
        k = n/1;
        n = n%1;
        sum += k;
    }
    cout<<sum<<endl;
    return 0;
}