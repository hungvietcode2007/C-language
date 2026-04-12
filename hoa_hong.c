#include <stdio.h>

int main()
{
    double d;
    long hoahong; 
    scanf ("%lf",&d);
    if (d>50000000)
    {
        hoahong = d*8/100;
        printf("%ld",hoahong);
    }
    else if (d>25000000)
    {
        hoahong = d*5/100;
        printf("%ld",hoahong);
    }
    else if (d>10000000)
    {
        hoahong = d*2/100;
        printf("%ld", hoahong);
    }
    else
    {
        printf("0");
    }
return 0;    
}
