#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string s, output = "";
    cin>>s;

    int l[26] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        l[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(l[i] == 0)
        {
            continue;
        }
        else if(!(l[i] % k))
        {
            for(int j = 0; j < l[i]/k; j++)
            {
                output += 'a' + i;
            }
        }
        else
        {
            output = "-1";
            break;
        }
    }
    if(output == "-1")
    {
        cout << output << endl;
    }
    else
    {
        for(int i = 0; i < k; i++)
        {
            cout << output;
        }
        cout << endl;
    }
    return 0;
}
