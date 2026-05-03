#include <stdio.h>

int main()
{
    int so_nho_nhat = 10000;
    int so_lon_nhat = -10000;
    int a,b,c,d;
    scanf("%d\n",&a);
    for (int i = 0; i<a;i++)
    {
        scanf("%d",&b);
        if (b>so_lon_nhat)
        {
            so_lon_nhat = b;
        }
        if (b<so_nho_nhat)
        {
            so_nho_nhat = b;
        }
    }
    printf("%d\n",so_nho_nhat);
    printf("%d",so_lon_nhat);
    return 0;
}