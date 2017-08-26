#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=1; i<n; i++)
    {
        if((i*(i+1))/2==n)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,i=1,j=1;
	bool check = false;
	scanf("%d",&n);
	while(i++<=n){
		if(n==j){ check = true; break; }
		j=j+i;
	}
	if(check) printf("YES\n");
	else printf("NO\n");
	return 0;
}*/
