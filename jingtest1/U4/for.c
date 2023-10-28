#include<stdio.h>
int main ()
{
int i,a;
scanf("%d",&i);
for (a=1;a<=i;a++)
{
    printf("%d",a);
    printf("*");
   // printf("%d  %d\n",a,i);
}
return 0;
}