#include <stdio.h>





double k, l, s, w, vv, g = 9.81;

int main()
{
    while (1)
    {
        scanf("%lf %lf %lf %lf", &k, &l, &s, &w);
        if(k==0&& l==0&& s==0&& w==0)
            break;
        if (l > s )
            vv = 2 * g * s;
        else
            vv = 2 * g * s - k * (s - l) * (s - l) / w;
        if (vv < 0 )
            printf("Stuck in the air.\n");
        else if (vv > 100)
            printf("Killed by the impact.\n");
        else
            printf("James Bond survives.\n");
    }

    return 0;
}
