#include <stdio.h>
int hamchanle(int i)
{
    if (i%2==0)
    {return 1;}
    else if (i%2==1)
    {return 0;}
    else if (i%2==-1)
    {return 0;}
}
int main()
{
    int t;
    int x;
    int y;
    int tong = 0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        scanf("%d",&y);
    if (x<y){
        for (int i=x+1;i<y;i++)
    {
        if (hamchanle(i)==0)
        {tong =tong + i;}
    }
    printf ("%d\n",tong);
    tong=0;
    }
    else if(x>y)
    {           
    for (int i=y+1;i<x;i++)
    {
        if (hamchanle(i)==0)
        {tong =tong + i;}
    }
    printf ("%d\n",tong);
    tong=0;
    }
}
    return 0;
}