#include <stdio.h>

int main() {
    int T, A, B, C;

    while (1) {
        printf("请输入 A B C：");
        int inputResult = scanf("%d %d %d", &A, &B, &C);

        if (inputResult == EOF) {
            // 如果输入结束，退出循环
            break;
        }

        if (A + B > C) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    }

    return 0;
}
