#include <stdio.h>

int main( ) {
    int y=0;
    int x,num;
    printf("Ҫ�жϵ�����");
    scanf("%d",&num);
    x=num;
    while(x>0){
y=y*10+x%10;
x=x/10;//������ʽ��˳��
    }

    if (num == y) {
        printf("%d��һ��������", num);
    } else {
        printf("%d����һ��������", num);
    }
}
