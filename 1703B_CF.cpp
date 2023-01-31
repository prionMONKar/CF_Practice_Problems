#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(s[i] != s[i-1]){
                cnt++;
            }
        }
        cout<<cnt+n<<endl;
    }
    return 0;
}

#include "bits/stdc++.h"
using namespace std;
#define ll long long
int t, n;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> t; 
  while (t--) {
    cin >> n;
    string s; cin >> s;
    sort(s.begin(), s.end());
    int ans = 1;
    for (int i = 1; i < n; i++)
      ans += (s[i] != s[i - 1]);
    cout << ans + n << "\n";
  }
}