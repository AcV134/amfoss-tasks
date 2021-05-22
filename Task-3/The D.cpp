#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0; i<=n; i++){
        int k=i;
        if(i>n/2)k=n-i;
        for(int j=0;j<n;j++){
            if(j<n/2-k||j>n/2+k)cout<<"*";
            else cout<<"D";
        }
        if(i==ceil(n/2))i++;
        cout<<"\n";
    }
    return 0;
}
