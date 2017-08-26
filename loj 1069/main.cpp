#include <cstdio>
using namespace std;

int main() {
	int m,l,t,c=1;
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d", &m,&l);
		if(l<m) l=(m<<1)-l;
		printf("Case %d: %d\n",c++,(l<<2)+19);
	}
	return 0;
}
