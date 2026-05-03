#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
    {if(a>c)
        {
            printf("%d",a);
        }
        else if(a<c)
        {
            printf("%c",c);
        }
    }
    else if(a<b)
    {
        if(b<c)
        {
            printf("%d",c);
        }
        else if(b>c)
        {
            printf("%d",b);
        }
    }
    return 0;
}