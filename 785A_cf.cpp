#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(s=="Tetrahedron"){
            sum = sum + 4;
        }
        else if(s=="Cube"){
            sum = sum + 6;
        }
        else if(s=="Octahedron"){
            sum = sum + 8;
        }
        else if(s=="Dodecahedron"){
            sum = sum + 12;
        }
        else if(s=="Icosahedron"){
            sum = sum + 20;
        }
    }
    cout<<sum<<endl;
    return 0;
}