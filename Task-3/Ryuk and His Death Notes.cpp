#include <bits/stdc++.h> 
using namespace std;
 

#define read(s) for (int i=0; i<s.size(); i++)cin>>s[i];


int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    read(a);
    read(b);
    int c=INT_MAX;
    for (int i=0; i<n; i++){
        c=min(c,(int)b[i]/a[i]);
    }
    cout<<c;
    return 0;
}
