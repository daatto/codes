#include <bits/stdc++.h>

using namespace std;
int a[500005], b[500005], n;
bool Check()
{
    sort(a, a+n);
    sort(b, b+n);
    for (int i=0; i<n; i++)
        if (a[i]!=b[i]) return false;
    return true;
}
int main()
{
    while (cin >> n && n>0)
    {
        for (int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        if (Check()) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
