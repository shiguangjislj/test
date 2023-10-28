#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("请输入金字塔的层数：");
    scanf("%d", &n);

    if (n <= 0) {
        printf("请输入一个正整数\n");
    } else {
        for (i = 1; i <= n; i++) {
            // 打印空格
            for (j = 1; j <= i - 1; j++) {
                printf(" ");
            }

            //showstars
            for (j = 1; j <= 2 * (n - i) + 1; j++) {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}





