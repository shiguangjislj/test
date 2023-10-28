#include <stdio.h>

int main() {
    int m, i;
    scanf("%d", &m);
    
    for (i = 1; i <= m; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
