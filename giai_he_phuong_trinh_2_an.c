#include <stdio.h>

int main()
{
    int a,b,c,d,e,f; 
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    float x=(c*e-f*b)/(a*e-d*b);
    float y=(c-a*x)/b;
    if(a/d==b/e && a/d!=c/f)
    {
        printf("he phuong trinh vo nghiem");
    }
    else if (a/d==b/e && a/d==c/f)
    {
        printf("he phuong trinh vo so nghiem");
    }
    else
    {
        printf("%.2f ",x);
        printf("%.2f", y);
    }
    return 0;
}
