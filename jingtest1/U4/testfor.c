#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("������������Ĳ�����");
    scanf("%d", &n);

    if (n <= 0) {
        printf("������һ��������\n");
    } else {
        for (i = 1; i <= n; i++) {
            // ��ӡ�ո�
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





