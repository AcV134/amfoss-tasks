#include <bits/stdc++.h>
using namespace std;
 
#define fast ios::sync_with_stdio(0);cin.tie(0);


int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string name;
            cin.ignore();
            getline(cin,name);
            stringstream ss(name); 
            int chance=0;
            do{ 
                    string word; 
                    ss >> word; 
                    int sum=0;
                    if(chance==n && word.size()){
                        for (int i=0; i<word.size(); i++)
                            sum+=word[i];
                        cout<<sum<<endl;
                        goto z;
                    }
                        chance++;
               }while (ss); 
                  cout<<-1<<endl;
            z:;
        }
    return 0;
}
