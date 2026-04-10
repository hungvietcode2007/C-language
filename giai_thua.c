#include <stdio.h>
#include <math.h>
double giaithua(int m)
{
    int tich=1;
    for (int c=1;c<=m;c++)
    {
        tich=tich*c;
        
    }
    return tich;
}
int main()
{
    int x,n;

    scanf("%d",&x);
    scanf("%d",&n);
     int m=2*n;
    double tong=1;
    double k=giaithua(m);
    if (n<1 || x<0)
    {
        printf("ERROR");
    }
    else 
    {
        for (int i=1;i<=n;i++)
        {
            double c= pow(x,2*i)/k;
            tong=tong+c;
        }
    }
    printf("%.4lf",tong);
    return 0;
}