#include <stdio.h>

int main() {
    int n,i,r;
    printf("������һ��������");
    scanf("%d", &n);
    if (n<= 0) {
        printf("������һ��������\n");
    }else {
   for (i=1;i<=n;i++)
   { 
    r=i%10;
   printf("%d",r);
   }
    }
    return 0; 
}
    