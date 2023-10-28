#include<stdio.h>
int main()
{
    int sum,num,s;
    sum=0;
    num=0;
    do{
        int t;
        printf("输入整数");
        scanf("%d",&t);
        sum+=t;
        num+=1;//num++

        printf("继续--1,停止--0");
scanf("%d",&s);
    }while(s==1);
            printf("和为%d\n平均值为%.2f\n",sum,(float)sum/num);
    
return 0;
    }
    
