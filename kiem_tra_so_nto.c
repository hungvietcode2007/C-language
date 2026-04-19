#include <stdio.h>
#include <math.h>
int songuyento(int n)
{
    if (n<=1)
    {
        return 0;
    }
    for (int i=2; i <=sqrt(n);i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    
    int n,i;
    scanf("%d",&n);
    if(songuyento(n)==0)
    {
        printf("Không phải là số nguyên tố.");
    }
    else
    {
        printf("Là số nguyên tố.");
    }
}