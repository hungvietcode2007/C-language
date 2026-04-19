#include <stdio.h>
#include <math.h>
int main()
{
    long n;
    scanf("%ld",&n);
    long so_uoc = 0;
    long tong_cac_uoc = 0;
    if(n<=0)
    {
        printf("Error");
        return 0;
    }
    else
    {
        for (long i=1;i<=sqrt(n);i++)
        {
            
            if(n%i==0)
            {
                long x= n/i;
               if (x!=i)
                {so_uoc=so_uoc +2;
            
            if(i%3==0 && i%5!=0)
                {
                    tong_cac_uoc = tong_cac_uoc + i;
                }
            if(x%3==0 && x%5!=0)
                {
                    tong_cac_uoc = tong_cac_uoc + x;
                }}
            else if (x==i)
            {
                so_uoc=so_uoc+1;
                if(i%3==0 && i%5!=0)
                {
                    tong_cac_uoc = tong_cac_uoc + i;
                }
            }
        }
    }
        printf("%ld\n", so_uoc);
        printf("%ld", tong_cac_uoc);
        return 0;
}}