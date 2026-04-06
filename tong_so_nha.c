#include <stdio.h>

int hamchanle(int i)
{
    if (i%2==0)
    {
        return 1;
    }
    else 
    {return 0;}
}
int main()
{
int n;
int i;
int tong =0;
    scanf("%d",&n);
for (i=0;i<=n;i++)
{

    if (hamchanle(i)==0)
    {
        tong=tong+i;
        
    }
}
    printf("%d",tong);
return 0;
}