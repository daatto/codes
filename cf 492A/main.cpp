#include <iostream>
#include <cmath>
using namespace std;
int main(){

    long n; cin >> n;
    long a = 0;
    while(a * (a + 1) * (a + 2) <= 6 * n){++a;}; --a;
    cout << a <<endl;
    return 0;
}
