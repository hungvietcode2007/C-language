#include <stdio.h>
int main(){
    double a;

double b;

double i;

scanf("%lf\n",&a);

scanf("%lf\n",&b);

if(a==0 && b!=0){

printf("Phuong trinh vo nghiem");

}

else if(a==0 && b==0){

printf("Phuong trinh vo so nghiem");}

else

{

i=-b/a;

printf("%lf",i);

}

return 0;
}

