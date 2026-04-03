#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float i;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f",&c);
    i=b*b-4*a*c;
    if(a==0 && b==0 && c==0){
        printf("Phuong trinh vo so nghiem");
    }
    else if(a==0)
    {
        printf("%f",-c/b);
    }
    else if(i<0)
    {
        printf("Phuong trinh vo nghiem");
    }
    else if(i==0)
    {
        printf("%f",-b/(2*a));
    }
    else 
    {
        printf("%f\n%f",(-b+sqrt(i))/(2*a),(-b-sqrt(i))/(2*a));
    }
    return 0;
}