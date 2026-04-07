#include <stdio.h>

int chanle(int n)
{
    if (n==0){return 1;}
        if (n%2==0)
        {
            return 1;        }
        else 
        {
            return 0;
    }
}
int amduong(int n)
{    
        if(n>0)
        {
            return 1;
        }
        else if(n<0)
        {return 0;}
       else {
        return -1;
       }
    }
int main()
{
    int i;
    int n;
    int chan=0;
    int le=0;
    int am=0;
    int duong=0;
    scanf("%d",&i);
    while (i--)
    {
        scanf("%d",&n);
        if (amduong(n)==0)
        {
            am=am+1;
        }
        else if (amduong(n)==1)
        {
            duong=duong+1;
        }
        if (chanle(n)==1)
        {
            chan=chan+1;
        }
        else if (chanle(n)==0)
        {
            le=le+1;
        }
    }
printf("Even: %d\n",chan);
printf("Odd: %d\n",le);
printf("Positive: %d\n",duong);
printf("Negative: %d",am);
return 0;
}