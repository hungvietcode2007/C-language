#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
if (n%2==0)
{printf("Hay nhap mot so le");}
else
{
for (int i= 0; i<n;i++)
{
    for (int j=0; j<n; j++)
    {
        if (i==j && i==n/2)
        {printf("X");
        }
       else if (i==j)
        {
            printf("\\");
        }
        else if (i==n-j-1)
        {
            printf ("/");
        }
        else
        {
            printf ("*");
        }
    }
    printf("\n");
}}
return 0;
}