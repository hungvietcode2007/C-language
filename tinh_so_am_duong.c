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
    int a;
    int n;
    int sogiatriam, sogiatriduong, sogiatrichan, sogiatrile;
    sogiatriam=0;
    sogiatrichan=0;
    sogiatriduong=0;
    sogiatrile=0;
         scanf("%d ",&a);
    for (int i=0;i<a;i++)
    {
   
    scanf("%d",&n);
        if (amduong(n)==1)
        {
            sogiatriduong++;
        }
        else if(amduong(n)==0)
        {
            sogiatriam++;}
        if(chanle(n)==1)
        {
            sogiatrichan++;
        }
        else if(chanle(n)==0)
        {
            sogiatrile++;
        }
    }
    printf("Even: %d\n",sogiatrichan);
    printf("Odd: %d\n",sogiatrile);
    printf("Positive: %d\n", sogiatriduong);
    printf("Negative: %d", sogiatriam);
return 0;
}
