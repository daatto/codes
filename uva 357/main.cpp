#include <bits/stdc++.h>

using namespace std;
unsigned long long dp[30001];
int main(){
	int money[]={1,5,10,25,50};
	int i,j,t;
	int n=5;
	dp[0]=1;
	for(i=0;i<n;i++)
		for(j=money[i];j<30001;j++)
			dp[j]+=dp[j-money[i]];
	while(scanf("%d",&t)==1){
		if(dp[t]==1)
			 printf("There is only %llu way to produce %d cents change.\n",dp[t],t);
		else
			printf("There are %llu ways to produce %d cents change.\n",dp[t],t);
	}
	return 0;
}
