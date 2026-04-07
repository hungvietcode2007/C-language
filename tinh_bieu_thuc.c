#include <stdio.h>
#include <math.h>

int main()
{
    double x; 
    double y;
    double S;
    double SS;
    scanf ("%lf",&x);
    scanf ("%lf",&y);
    S=5*x*sin(y)-3*pow(y,3)*x;
    SS=2*pow(x,2)*y +1 - x+y;
    if (x<=y)
    {
        printf("%.3lf",S);
    }
    else 
    {
        printf("%.3lf",SS);
    }
    return 0;
}