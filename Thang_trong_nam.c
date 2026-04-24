#include <stdio.h>
int main()
{
    int a;
    printf("Thang: ");
    scanf("%d",&a);
    if (a>12 || a<1)
    {
     printf("khong ton tai");
    }
    else if(a==4 || a==6 || a==9 || a==11)
    {
        printf ("Thang %d co 30 ngay",a);
        return 0;

    }
    else if (a==2)
    {
        printf("Thang 2 co 28 hoac 29 ngay");
    return 0;
    }
    else 
    {
        printf("Thang %d co 31 ngay",a);
        return 0;
    }
    return 0;
}