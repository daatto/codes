#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
	long long n;
	while(cin>>n){
	if(n<9)
		cout<<0<<endl;
	else if(n==9)
		cout<<8<<endl;
	else
	{
		int x=n-10;
		cout<<72;
		for(int i=0;i<x;i++)
			cout<<0;
		cout<<endl;
	}
	}
	return 0;
}*/
int main()
{

        int c=0;
        for(unsigned long long j=100000000;j<=10000000000;j++)
        {
            if(j*j%1000000000==987654321)
            {cout<<j<<endl;
                c++;}
        }
        cout<<c<<endl;
    return 0;
}
