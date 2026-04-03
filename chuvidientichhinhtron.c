#include <stdio.h>
#include <math.h>
int main()
{
    double r;
    double pi;
    double M;
    double S;
    scanf("%lf", &r);
    if(r<=0)
    {
        printf("ERROR");
        
    }
    else
    {
    pi=3.14159;
    M=2*r*pi;
    S=r*r*pi;
    printf("%lf\n",M);
    printf("%lf",S);
    }
    return 0;
}