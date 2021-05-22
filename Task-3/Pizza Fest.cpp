#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,p;
    cin>>n>>m;
    vector<long long int> a(n),b(m);
    map<long long int,vector<long long int>>d;
    for (long long int i=0; i<n; i++){
        cin>>p;
        d[p].push_back(i+1);
        sort(d[p].begin(),d[p].end());
    }
    for (long long int i=0; i<m; i++){
        cin>>p;
        if(d[p].size()){
            cout<<d[p][d[p].size()-1]<<" ";
            d[p].pop_back();
        }
        else cout<<-1<<" ";
    }
    
    return 0;
}
