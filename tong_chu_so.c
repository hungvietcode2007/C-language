#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    int tong = 0;
    for (int i =1; i<=n; i++)
    {
        int x,y,z,t,c;
        c=i;
        x=c%10; c=c/10;1000
        y=c%10; c=c/10;
        z=c%10; c=c/10;
        t=c%10;
        if ((x+y+z+t)>=a && (x+y+z+t)<=b)
        {
            tong = tong+i;
        }

    }
    printf("%d", tong);
    return 0;
}