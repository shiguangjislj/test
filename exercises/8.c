#include <stdio.h>

int main( ) {
    int y=0;
    int x,num;
    printf("要判断的整数");
    scanf("%d",&num);
    x=num;
    while(x>0){
y=y*10+x%10;
x=x/10;//！这俩式子顺序
    }

    if (num == y) {
        printf("%d是一个回文数", num);
    } else {
        printf("%d不是一个回文数", num);
    }
}
