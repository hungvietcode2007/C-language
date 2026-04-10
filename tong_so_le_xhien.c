#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int hamchanle(int b)
{
    if (b%2==0)
    {
        return 1;
    }
    else 
    {return 0;}
}
int main()
{
    int tong =0;
    char a[15];
    scanf("%s",a);
    int c=strlen(a);
    if (c>10)
    {printf("ERROR");
    return 0;}
    else if(atoi(a) <= 0)
    {
        printf("ERROR");
        return 0;
    }
    else 
    {
        for(int i=0; i<c;i++)
        {
            int b=a[i] -'0';
            if (hamchanle(b)==0)
            {
                tong=tong+b;
            }
        }
    }
printf("%d",tong);
    return 0;
}