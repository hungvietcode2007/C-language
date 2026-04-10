#include <stdio.h>
#include <math.h>
double giaithua(double m)
{
    double tich=1;
    for (double c=1;c<=m;c++)
    {
        tich=tich*c;
        
    }
    return tich;
}
int main()
{
    double x,n;

    scanf("%lf",&x);
    scanf("%lf",&n);
    double tong=1;
double k;
    if (n<1 || x<0)
    {
        printf("ERROR");
        return 0;
    }
    else 
    {

        for (double m=1;m<=n;m++)
        {
              k=giaithua(2*m);
            double c= pow(x,2*m)/k;
            tong=tong+c;
        }
    }
    printf("%.4lf",tong);
    return 0;
}