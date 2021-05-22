#include <bits/stdc++.h>
using namespace std;

#define read(s) for (int i=0; i<s.size(); i++)cin>>s[i];

void check(vector<int> x,int y,int sum)
{
        unordered_set<int> s;
        for (int i=0; i<y; i++)
        {
            int t = sum - x[i];
         if (s.find(t) != s.end()){
             cout<<"True";
             return;
         }
        s.insert(x[i]);
    }
    cout<<"False";
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    read(a);
    sort(a.begin(),a.end());
    check(a,n,m);
    return 0;
}
