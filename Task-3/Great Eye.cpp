#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(;t>0;t--){
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
