#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin>>n>>m;

  if (m > n) {
    cout<<-1<<endl;
    return 0;
  }

  int s = (n / 2) + (n % 2);

  while (s < n && s % m != 0) {
    ++s;
  }
  if(s%m==0)
  {
      cout<<s<<endl;
      return 0;
  }
  else
  {
      cout<<-1<<endl;
      return 0;
  }
}
