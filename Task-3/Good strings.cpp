#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=count(s.begin(),s.end(),'1');
    int zero=count(s.begin(),s.end(),'0');
    if(one!=zero)cout<<1;
    else cout<<2;
    return 0;
}
