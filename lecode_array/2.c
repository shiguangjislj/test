#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int A, m, n, i, k, j, res0, res1, res, res2, B, num;
    res1,res2=0,0;
    printf("m,n");
    scanf("%d %d",&m,&n);
    int *a = (int *)malloc(m * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));
   
    printf("方全1 ");
for (i = 0; i < m; i++){
        scanf("%d", &a[i]);
        while (i<m)
    {  i++;
        int res = pow(10, i);
        A = a[i] * res;
        res1 += A;
    }
}
    
    printf("方全2 ");
    for (int j = 0; j < n; j++){
        scanf("%d", &b[j]);
    // int res=pow(10,i);
    while (i<m)
    {  i++;
        int res = pow(10, j);
        B= b[j] * res;
        res2 += B;
    }
    }
    
    
    int r = A + B;
    while (r != 0)
    {
        r /= 10;
        num++;
    }
    char c[100];
    sprintf(c, "%d", r);
    for (int v = num - 1; v >= 0; v--)
    {
        printf("%d  ", c[v]);
    }
    free(a);
    free(b);
    return 0;
}
