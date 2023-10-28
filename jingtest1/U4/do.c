#include<stdio.h>
int main()
{
    int hand;
    do{
        scanf("%d",&hand);
    
    }while (hand>=1);
    switch (hand){
        case 1:printf("1");break;
        
        case 0:printf("0");break;
    }
    return 0;
}