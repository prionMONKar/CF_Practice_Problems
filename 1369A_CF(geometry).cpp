#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%4) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

/*
NOTE:
In this problem we have to check is there any two edges which are parallel to the co-ordinate axes at the same time.
If there is any then print "yes" else "no".
To check this first we have to check the angle between two adjacent vertices if the angle between them is equal to 2*PIE/n then the condition is true
and we need to have angles between the two edges as PIE/2 but in this regular polygon there can be K number of vertices 
so the final formula is to get K*(2*PIE/n) = PIE/2 which means n = 4*K so K=n/4(So n must be divisble by 4)
*/