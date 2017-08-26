#include<bits/stdc++.h>

using namespace std;

bool marked[1000000];
long long c=0;
bool isprime(int n){
if(n==2) return true;
if(n<2) return false;
if(n%2==0) return false;

return marked[n]=false;

}
void sieve(long long n){
for(long long i=3;i*i<=n;i+=2){
    if(marked[i]==false){
        for(int j=i*i;j<=n;j+=i+i){
            marked[j]=true;
        }
    }
}
}

int main()
{
    long long n;
    cin>>n;
    sieve(n);
    if(sieve[n]==1)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}
