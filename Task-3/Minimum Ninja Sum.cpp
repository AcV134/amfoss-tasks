#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int t;
    cin>>t;
    for(;t>0;t--){
        string n;
        long long int m;
        cin>>n>>m;
        vector<long long int> a;
        long long int sum;
        if(n.size()<m){
            cout<<-1<<"\n";
            continue;
        }
        long long int mi=INT_MAX;
        long long int p=0;
        for (int i=0; i<m; i++)sum+=int(n[i])-48;
        a.push_back(sum);
        for (int i=m; i<n.size(); i++){
            sum=int(n[i])-48+sum-(int(n[p++])-48);
            if(i!=0)
            mi=min(mi,abs(a[a.size()-1]-sum));
            a.push_back(sum);
        }
        if(mi!=INT_MAX)cout<<mi<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}
