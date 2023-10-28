#include <stdio.h>

int main() {
    int n,i,r;
    printf("请输入一个整数：");
    scanf("%d", &n);
    if (n<= 0) {
        printf("请输入一个正整数\n");
    }else {
   for (i=1;i<=n;i++)
   { 
    r=i%10;
   printf("%d",r);
   }
    }
    return 0; 
}
    