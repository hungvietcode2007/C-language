#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int tien_dien;
    if (a<0)
    {
        printf("ERROR");
        return 0;
    }
    else if (a>200)
    {
        tien_dien = 600*50+ 400*150+200*(a-200);
    }
    else if (a>50)
    {
        tien_dien = 600*50+400*(a-50);
    }
    else
    {
        tien_dien = a*600;
    }
    printf("%d", tien_dien + 25000);
    return 0;
}