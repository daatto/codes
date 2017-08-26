#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    int l=1;
    while(t--)
    {
        int n;
vector<int> a;
vector<int> ans;

 cin >> n;

 for (int i = 0; i < n; ++i)
 cin >> a[i];
 sort(a.begin(), a.end());

 for (int i = 0; i < n; ++i) {
 if (a[i] >= n) {

 cout<<"no"<<endl;
 }
 if (ans[a[i]] == 0)
 ans[a[i]]++;
 else if (ans[n - 1 - a[i]] == 0)
 ans[n - 1 - a[i]]++;
 else {

cout<<"no"<<endl;
 }
 }
cout<<"yes"<<endl;
}
    }
