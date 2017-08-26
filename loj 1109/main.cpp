


#include <cstdio>
#include <algorithm>
using namespace std;

int divs[1001], num[1001];

int calcDiv(int n) {
	int tot = 0, i;
	for(i = 1; i*i <= n; i++) {
		if(n % i == 0) {
			if(i*i != n) tot += 2;
			else tot++;
		}
	}
	return tot;
}

bool comp(const int x, const int y) {
	return ((divs[x] == divs[y]) ? (x > y) : (divs[x] < divs[y]));
}

int main() {
	freopen("out.txt", "w", stdout);
	for(int i = 1; i <= 1000; i++) {
		divs[i] = calcDiv(i);
		num[i] = i;
	}
	sort(num+1, num+1001, comp);
	printf("N[] = {\n");
	for(int i = 1; i <= 1000; i++) {
		printf("%4d", num[i]);
		if(i < 1000) printf(",");
		if(i % 100 == 0) printf("\n");
	}
	printf("};\n");
	return 0;
}

