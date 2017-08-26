#include <bits/stdc++.h>
using namespace std;
#define pb push_back
 vector<int> v;

int main ()
{

	int n,g,money;
	cin>>n>>g>>money;
	v.pb(0);
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		v.pb(t);
	}
	int ans1=INFINITY,ans2=INFINITY;
	for(int i=g+1;i<=n;i++){
		if(v[i] and v[i]<=money){

			ans1=(i-g)*10;

			break;
		}
	}
	for(int i=g-1;i>=1;i--){
		if(v[i] and v[i]<=money){
			ans2=10*(g-i);
			break;
		}
	}
	cout<<min(ans1,ans2)<<endl;
    return 0;
}
