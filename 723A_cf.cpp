#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int x1,x2,x3,sum,k,l;
    cin>>x1>>x2>>x3;

    int max=0;
    int min=0;

    if(x1>x2 && x1>x3){
        max = x1;
    }
    else if(x2 > x3){
        max = x2;
    }
    else{
        max = x3;
    }
    if(x1<x2 && x1<x3){
        min = x1;
    }
    else if(x2 < x3){
        min = x2;
    }
    else{
        min = x3;
    }

    if(x1 != max && x1 != min){
        k = max-x1;
        l = x1-min;
        sum = (k+l);
    }
    else if(x2 != max && x2 != min){
        k = max-x2;
        l = x2-min;
        sum = (k+l);
    }
    else if(x3 != max && x3 != min){
        k = max-x3;
        l = x3-min;
        sum = (k+l);
    }
    cout<<sum<<endl;
    return 0;
}