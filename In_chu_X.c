#include <stdio.h>
#include <string.h>
int main(){
char s[100];
int n;
scanf("%d",&n);
if (n%2==0)
{
    printf("Vui long nhap 1 so le");
}
else
{
memset(s, '*', n);
int m=n/2;
int x=n/2+0.5;
for (int i=0;i<m;i++)
{s[i] = '\\';

s[n-i-1] = '/';
printf("%s\n",s);
memset(s, '*', n);
}
s[x]='X';
printf("%s\n",s);
s[x]='*';
for (int i=m+1;i>m;i++)
{s[i] = '\\';

s[n-i-1] = '/';
printf("%s\n",s);
memset(s, '*', n);
}
}
return 0;
}