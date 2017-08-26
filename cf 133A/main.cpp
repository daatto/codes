#include<iostream>
#include<string>
using namespace std;
int main()
{
	int count = 0;
	string p,s = "NO";
	getline(cin,p);
	while (p[count] != '\0')
	{
		if (p[count] == 'H' || p[count] == 'Q' || p[count] == '9')
			s = "YES";
	count++;
	}
	cout << s << endl;
}
