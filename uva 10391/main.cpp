#include <bits/stdc++.h>
using namespace std;


vector<string> word;
map<string, int> m;
int main()
{

    string a, b;
    string s;
    while (getline(cin,s))
    {
        m[s] = 1;
        word.push_back(s);
    }
    for(int i=0;i<word.size();i++)
    {
        int len = word[i].length();
       for(int j=1;j<len-1;j++)
        {
            a = word[i].substr(0, j);
            b = word[i].substr(j, len);
            if (m[a] && m[b])
            {
                cout << word[i] << endl;
                break;
            }
        }
    }
}
