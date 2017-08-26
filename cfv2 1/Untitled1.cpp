
#include <bits/stdc++.h>
using namespace std;
#include <cmath>

double p[1000001], q[1001];

int main() {
	int n,a,s(0);
	cin>>n>>a;
	for(int i=1;i<=n;i++)
    {
        s+=log10(i);
    }
    cout<<(s+1)/log10(a);

	return 0;
}
