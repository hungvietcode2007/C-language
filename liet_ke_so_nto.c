#include <stdio.h>
#include <math.h>
int kiemtrasonto(int n)
{
    int i;
    if(n>=2){
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0){
            return 0;
        }
    }
}
return 1;}
int main()
{
    int a;
    int b;
    scanf("%d",&a);
    if (a<2)
    {return 0;}
    for (b=2;b<=a;b++)
    {
        if(kiemtrasonto(b)==1)
        {
            printf("%d ",b);
        }

    }     
return 0;
}