#include <stdio.h>
//错误示范，用循环只能得到一整个循环结果啊，再去设值麻烦，用求余运算显示
int main() {
    int m, i, a;
    a = 0;
    scanf("%d", &m);
    
    if (m < 10) {
        for (i = 1; i <= m; i++) {
            printf("%d", i);
        }
    } else {
        for (i = 1; i <=10; i++) {
            //printf("%d", i);
            a++;
            if (a <= m&&i==10) {
                printf("0");
                a++;
                i=0;
                continue;
            }
            printf("%d", i);
        }
    }
    printf("%d",a);
    return 0;
}
