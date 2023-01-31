#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v;
    int input;
    for(int i=0;i<4;i++){
    	cin>>input;
    	v.push_back(input);
    }
 
    sort(v.begin(), v.end());

    int a = ((v[0] + v[1]) - v[2])/2;
    int b = v[0] - a;
    int c = v[1] - a;
    cout<<a<<" "<<b<<" "<<c;
    cout<<endl;
 
    return 0;
}