#include <stdio.h>
int main()
{
    int T;
    printf("ÇëÊäÈë×éÊı£º");
    scanf("%d",&T);
    int A[T], B[T], C[T];
    for (int i=0;i<T;i++){
        scanf("%d %d %d",&A[i],&B[i],&C[i]);
    }
        for (int i=0;i<T;i++){
             if (A[i] + B[i] > C[i]) {
            printf("Case #%d: true\n", i + 1);
        } else {
            printf("Case #%d: false\n", i + 1);
        }
        }

    return 0;
}