#include <stdio.h>

int main()
{
    int n;
    int i=1;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        int a=n*i;
        printf("%d * %d = %d\n",n,i,a);
    }
return 0;
}