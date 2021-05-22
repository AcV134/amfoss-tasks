#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    long long int m=1000000007;
    vector<long long int> a(3);
    a[0]=1;
    a[1]=2;
    a[2]=3;
    for (long long int i=3; i<1000000; i++)a.push_back((a[i-1]%m+a[i-2]%m+a[i-3]%m)%m);
    for(;t>0;t--){
        long long int n;
        cin>>n;
        string x=to_string(a[n-1]);
        reverse(x.begin(),x.end());
        bool flag=0;
        for (long long int i=0; i<x.size(); i++){
            if(x[i]!='0')flag=1;
            if(flag)cout<<x[i];
        }
        cout<<"\n";
    }
    return 0;
}
