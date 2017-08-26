#include <cstdio>
#include <cmath>
using namespace std;

const double PI= acos(-1.0);
int main()
{
    int t;
    scanf("%d" ,&t);
    while(t--)
    {
        double L;
        scanf("%lf",&L);
        double ra=PI*L*L/25;
        printf("%.2lf %.2lf\n", ra, 3*L*L/5 - ra);

    }

}
