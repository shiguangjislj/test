#include<stdio.h>
#include<memory.h>
//数组间赋值
int main(){
    int a1[5] = {};
    int a2[5]={1,2,3,4,5};
    memcpy(a1,a2,sizeof(a1));
    for (int i=0;i<5;i++)
    printf("%d",a1[i]);
    return 0;
}