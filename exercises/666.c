#include <stdio.h>

int main() {
    int T, A, B, C;

    while (1) {
        printf("������ A B C��");
        int inputResult = scanf("%d %d %d", &A, &B, &C);

        if (inputResult == EOF) {
            // �������������˳�ѭ��
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
