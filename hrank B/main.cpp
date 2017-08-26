#include <bits/stdc++.h>

using namespace std;
bool isPrime(int num) {
    if (num <= 3) {
        return num > 1;
    } else if (num % 2 == 0 || num % 3 == 0) {
        return false;
    } else {
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}
int main()
{
   vector<int>v;
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   int j=n;
   v.clear();
   while(j)
   {
       v.push_back(j);
       j--;
   }
   int c=0;

   for(int i=0;i<n;i++)
   {
       if(isPrime(v[i])) {c++;
       }
   }
   if(c%2==0) cout<<"Bob"<<endl;
   else
    cout<<"Alice"<<endl;
   }

    return 0;
}
