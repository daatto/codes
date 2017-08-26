#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool marked[M];
void sieve(long long n) {
  for (long long i = 2; i * i <= n; i++) {
    if (marked[i] == false) { // i is a prime
      for (long long j = i * i; j <= n; j += i) {
        marked[j] = true;
      }
    }
  }
}
int main()
{
    long long n;
    cin>>n;
    sieve(n);
    for(long long i=2;i<n;i++){
        if(marked[i]==false)
            cout<<i<<" ";
    }





}
