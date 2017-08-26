#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

int main(){
    string s ;
    set<string>SS;
    while(getline(cin,s)){
        for(int i=0;i<s.size();i++) s[i] = tolower(s[i]);
        s[s.size()] = '*';

        string z = "";
        bool f = false ;
        {
           for(int i=0;i<=s.size();i++){  if(islower(s[i])){
                z += s[i];
                f = true ;
            }else if(f){
                SS.insert(z);
                z = "";
                f = false ;
            }
           }
        }
    }
        for(__typeof(SS.begin()) i=SS.begin();i!=SS.end();i++) cout << *i << endl;
}
