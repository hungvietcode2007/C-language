#include <stdio.h>

int main()
{
    double x;
    double y;
    double i;
    double z;
    double t;
    scanf("%lf",&x);
    scanf("%lf",&y);
    i=x*x+y*y;
    z=(x+y)*(x+y);
    t=(x-y)*(x-y);
    printf("%lf\n",i);
    printf("%lf\n",z);
    printf("%lf\n",t);
    return 0;
}