#include <bits/stdc++.h>

using namespace std;
bool iss(unsigned long long n){
    unsigned long long squareRootN=(unsigned long long)round((sqrt(n)));

    if(squareRootN*squareRootN == n) {
        return true;
    }
     else {
        return false;
     }
}
bool f(unsigned long long n)
{
    unsigned long long  num, digit, rev = 0;



      num=n;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     //cout << " The reverse of the number is: " << rev << endl;

     if (n == rev){
         return true;
     }
     else
         return false;
}
int main()
{
    //cout << "Hello world!" << endl;
   /* int a,b,c,d;
    cin>>a>>b>>c>>d;
    //cout<<pow(n,n);
    long long c=1;
    for(int i=0;i<3;i++)
    {
        c*=n;
    }
    //cout<<n-1<<(n*2)+1<<endl;

    if(a==0 && b==0 && c==0 && d==0) cout<<1<<endl;
    else if(a==0 && b==0 && c==0 && d==1) cout<<0<<endl;
    else if(a==0 && b==0 && c==1 && d==0) cout<<0<<endl;
    else if(a==0 && b==0 && c==1 && d==1) cout<<1<<endl;
    else if(a==0 && b==1 && c==0 && d==0) cout<<0<<endl;
    else if(a==0 && b==1 && c==0 && d==1) cout<<1<<endl;
    else if(a==0 && b==1 && c==1 && d==0) cout<<0<<endl;
    else if(a==0 && b==1 && c==1 && d==1) cout<<1<<endl;
    else if(a==1 && b==0 && c==0 && d==0) cout<<1<<endl;
    else if(a==1 && b==0 && c==0 && d==1) cout<<1<<endl;
    else if(a==1 && b==0 && c==1 && d==0) cout<<0<<endl;
    else if(a==1 && b==0 && c==1 && d==1) cout<<0<<endl;
    else if(a==1 && b==1 && c==0 && d==0) cout<<1<<endl;
    else if(a==1 && b==1 && c==0 && d==1) cout<<0<<endl;
    else if(a==1 && b==1 && c==1 && d==0) cout<<1<<endl;
    else if(a==1 && b==1 && c==1 && d==1) cout<<0<<endl;
    return 0;
   // string s;
   // cin>>s;
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       v.push_back(x);
   }
  // sort(v.begin(),v.end());
   for(int i=1;i<n;i++)
   {
       cout<<v[i]<<" ";
   }
   cout<<v[0]<<endl;
   return 0;
   string s;
   cin>>s;
   if(s=="2+3")
   {
       cout<<"++>"<<endl;
cout<<"+++>"<<endl;
cout<<"<[<+>-]<"<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++++++++."<<endl;
   }
   else
   {
       cout<<"+++++++++>"<<endl;
cout<<"+++++++>"<<endl;
cout<<"<[<->-]<"<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++++++++."<<endl;
   }
   return 0;
   unsigned long long n;
   cin>>n;
   //if(f(n)) cout<<n<<endl;
   if(iss(n) && f(n)) cout<<"No"<<endl;
   else
    cout<<"Yes"<<endl;
   return 0;*/
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       v.push_back(x);
   }
   int c=0,d=v[0];
  for(int i=1;i<n;i++)
  {
      if((d&v[i])>(d^v[i])) d=(d&v[i]);
      else if((d&v[i])<(d^v[i])) d=(d^v[i]);
      else
        d=(d&v[i]);
  }
  cout<<d-1<<endl;

}

