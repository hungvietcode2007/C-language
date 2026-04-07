#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char a[20];
    scanf("%d",&t);
    while (t--)
    {
        scanf("%s",a);
        for (int i=0;i<strlen(a);i++)
        {
            printf("%c " ,a[i]);
        }
    printf("\n");    }
    return 0;
}