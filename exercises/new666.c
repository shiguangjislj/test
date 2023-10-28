#include <stdio.h>

int main() {
    int T;
    printf("输入测试用例数量: ");
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long long A, B, C;
        printf("输入测试用例 #%d (A B C): ", i);
        scanf("%lld %lld %lld", &A, &B, &C);

        if (A + B > C) {
            printf("Case #%d: true\n", i);
        } else {
            printf("Case #%d: false\n", i);
        }
    }

    return 0;
}

