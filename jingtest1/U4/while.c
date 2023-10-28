#include<stdio.h>
int main()
{
    int i,m;
    m=-2;
    printf("整数初始值：");
scanf("%d",&i);
while(i>=0)
{
    //m+=2;
    i-=2;
    m+=2;
printf("%d\n",m);
}
printf("----");
return 0;
}