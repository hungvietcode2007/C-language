#include <stdio.h>
#include <math.h>
int main()
{
    long long a;
    long long c;
    long long so_nhi_phan = 0;
    int he_so = 1;
    scanf("%lld",&a);
    if (a>(pow(2,16)-1))
    {
        printf("TOO BIG");
    }
    else
    {
    for (int i=0;i<16;i++)
    {
        c=a%2;
        so_nhi_phan = so_nhi_phan + c * he_so;
        a=a/2;
        he_so = he_so *10;

    }
                printf("%lld",so_nhi_phan);
}

    return 0;
}