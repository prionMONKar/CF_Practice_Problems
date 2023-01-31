/*#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int n;cin>>n;
    while(n--){
        int cnt=0,cnt1=0;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') cnt++;
            else cnt1++;
        }
        int k = min(cnt,cnt1);
        if(k%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
    return 0;
}*/
#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int ok=1;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]!='Y'){
                if(s[i]!='e'){
                    if(s[i]!='s'){
                        ok=0;break;
                    }
                }
            }
            else if(s[i]=='e' && s[i+1]!='s'){
                ok=0;break;
            }
            else if(s[i]=='s'&&s[i+1]!='Y'){
                ok=0;break;
            }
            else if(s[i]=='Y'&&s[i+1]!='e'){
                ok=0;break;
            }
        }
        if(ok) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}