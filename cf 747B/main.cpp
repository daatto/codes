#include <bits/stdc++.h>
using namespace std;
string s;

int main()
{
    long long y;
    cin>>y;
    cin>>s;
    long long A=0,T=0,C=0,G=0,q=0;
    long long l=s.size();
    if(l%4 !=0)
    {
        cout<<"==="<<endl;
    }
    else
    {
        long long a=l/4;
        for(long long i=0; i<l; i++)
        {
            if(s[i]=='?')q++;
            if(s[i]=='A') A++;
            else if(s[i]=='T')T++;
            else if(s[i]=='C')C++;
            else if(s[i]=='G')G++;
        }
       if(A>a || T>a || C>a || G>a)
       {
           cout<<"==="<<endl;
           return 0;
       }
       A=a-A;
       T=a-T;
       C=a-C;
       G=a-G;
       for(long long i=0;i<l;i++)
       {
           if(s[i]=='?')
           {
               if(A>0)
               {
                   s[i]='A';
                   A--;
               }
               else if(C>0)
               {
                   s[i]='C';
                   C--;
               }
               else if(G>0)
               {
                   s[i]='G';
                   G--;
               }
               else if(T>0)
               {
                   s[i]='T';
                   T--;
               }

           }
       }
       cout<<s<<endl;
    }
    return 0;
}
