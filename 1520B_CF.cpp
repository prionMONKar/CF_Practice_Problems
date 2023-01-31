#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=9){
            cout<<(n-0)<<endl;
        }
        else if(n%10 == 0){
            int l = int(log10(n));
            int m = l*9;
            int result = m-((pow(10,l)-n)/10);
            cout<<result<<endl;
        }
        else{
            int l = int(log10(n)+1);
            int m = l*9;
            int result = m-((pow(10,l)-n)/10);
            cout<<result<<endl;
        }
    }
    return 0;
}


int l = int(log10(n)+1);
int m = (l-1)*9;
int result = m+(n%10);
cout<<result<<endl;


#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l = int(log10(n)+1);
        if(n<=9){
            cout<<(n-0)<<endl;
        }
        else if(pow(10,(l-1))<n){
            int m = n/pow(10,(l-1));
            int result = ((l-1)*9) + m;
            cout<<result<<endl;
        }
        else{
            cout<<(l-1)*9<<endl;
        }
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n < 10){
            cout<<n;
        }
        else{
            n = (n/10-1)+9;
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}