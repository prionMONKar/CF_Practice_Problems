//USING SET
#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,p,q,cnt=0;cin>>n>>p;
    int arr[2*n];
    for(int i=0;i<p;i++) cin>>arr[i];
    cin >> q;
    for(int i=p;i<p+q;i++) cin>>arr[i];

    set<int> s;
    s.insert(arr,arr+p+q);
    if(n==s.size()) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}

//SAME SOLUTION USING ARRAY

/*#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,p,q,cnt=0;cin>>n>>p;
    int arr[2*n];
    for(int i=0;i<p;i++) cin>>arr[i];
    cin >> q;
    for(int i=p;i<p+q;i++) cin>>arr[i];

    sort(arr,arr+(p+q));
    for(int i=0;i<p+q;i++){
        if(arr[i] != arr[i-1]) cnt++;
    }

    if(n==cnt) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}*/