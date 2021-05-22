#include <bits/stdc++.h>
using namespace std;
 
 

#define read(s) for (int i=0; i<s.size(); i++)cin>>s[i];


int main(){
    long long int t;
    cin>>t;
    for(;t>0;t--){
        long long int n,k;
        cin>>n>>k;
        vector<int> a(n);
        read(a);
        sort(a.rbegin(),a.rend());
        a[0]-=k;
        long long int prod=1;
        for (int i=0; i<n; i++)
            prod*=a[i];
        cout<<prod<<"\n";
    }
    return 0;
}
