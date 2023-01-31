#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
bool checkpangram(string s){
    vector<bool> mark(26,0);
    int index;
    for(int i=0;i<s.size();i++){
        if('A'<=s[i] && s[i]<='Z'){
            index = s[i]-'A';
        }
        else if('a'<= s[i] && s[i]<='z'){
            index = s[i] - 'a';
        }
 
        mark[index] = 1;
    }
    for(int i=0;i<=25;i++){
        if(mark[i] == 0){
            return (0);
        }
    }
    return 1;
}
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(checkpangram(s) == 1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	cout<<endl;
	return 0;
}