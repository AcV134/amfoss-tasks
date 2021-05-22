#include <bits/stdc++.h>
using namespace std;

#define read(s) for (int i=0; i<s.size(); i++)cin>>s[i];

int main(){
    int t;
    cin>>t;
     for(;t>0;t--){
        int n,m,k,c=0,sum=0;
        cin>>n>>m>>k;
        vector<int> a(m),b(m);
        read(a);
        read(b);
        sort(b.rbegin(),b.rend());
        for (int i=0; i<m; i++){
            sum+=b[i];
            c++;
            if(sum>=n){
                if(c<=k){
                    cout<<"YES\n";
                    break;
                }
                else break;
            }
            
        }
         if(c<=k)continue;
        cout<<"NO\n";
        
    }
    return 0;
}
