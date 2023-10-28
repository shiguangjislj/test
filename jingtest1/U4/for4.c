#include <stdio.h>
//还有问题
    int main() {
        int n,i,j;
        printf("金字塔层数：");
        scanf("%d",&n);
       for (i=1;i<=n;i++) {
        for(j=2 * (n - i) + 1;j>=0;j--){
            if(i-1>=j||j>=n-i+2)
        printf("");
        else if(j>i-1&&j<n-i+2)
        printf("%d",i%10);

        }
        printf("\n");
       }
return 0;
        }
       
    