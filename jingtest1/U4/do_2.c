#include<stdio.h>
int main()
{
    int sum,num,s;
    sum=0;
    num=0;
    do{
        int t;
        printf("��������");
        scanf("%d",&t);
        sum+=t;
        num+=1;//num++

        printf("����--1,ֹͣ--0");
scanf("%d",&s);
    }while(s==1);
            printf("��Ϊ%d\nƽ��ֵΪ%.2f\n",sum,(float)sum/num);
    
return 0;
    }
    
