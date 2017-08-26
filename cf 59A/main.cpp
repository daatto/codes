#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int c = 0;
    for(int k = 0; k < s.size(); k++)
    {
        if(s[k]<=123 && s[k]>=97)
        {
            c++;
        }
    }
    int (*conversionFunction)(int);
    if(c >= 1.0 * s.size() / 2)
    {
        conversionFunction = tolower;
    }
    else
    {
        conversionFunction = toupper;
    }
    for(int k = 0; k < s.size(); k++)
    {
        s[k] = conversionFunction(s[k]);
    }
    cout << s << endl;
    return 0;
}
