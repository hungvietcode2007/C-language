#include <stdio.h>

int main()
{
    int n;
    int x;
    int tong=0;
    int i=0;
    scanf("%d",&n);
    while (tong<=n)
    {
        i++;
        tong = tong+i;
  
    }
    printf("%d",i-1);
    return 0;
}