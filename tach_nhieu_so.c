#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char a[10];
    scanf("%d",&n);
    for (int c=0;c<n;c++)
    {
        scanf("%s",a);
    for (int i=0;i<strlen(a);i++)
        {printf("%d ",a[i]-'0');}
        printf("\n");
    }
    return 0;
}