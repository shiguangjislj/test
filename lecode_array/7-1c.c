#include <stdio.h>  
#include <stdbool.h>  
#include <stdlib.h>  
  
int **matrixReshape(int **arr, int m, int n, int **newa)  
{  
    int r = m * n;  // 新矩阵的行数  
    int c = n;      // 新矩阵的列数  
  
    if ((r * c) != m * n)  
    {  
        return arr;   // 无法重塑，返回原始矩阵  
    }  
    else  
    {  
        // 为新矩阵分配内存  
        newa[0] = (int *)malloc(r * c * sizeof(int));  
        if (newa[0] == NULL)   // 检查内存分配是否成功  
        {  
            return NULL;  
        }  
        // 转移数据到新矩阵  
        for (int x = 0; x < m * n; x++)  
        {  
            newa[x / c][x % c] = arr[x / n][x % n];  
        }  
        return newa;   // 返回新矩阵  
    }  
}  
  
int main()  
{  
    int m, n, i, j, r, c;  
    scanf("%d %d", &m, &n);  // 输入原始矩阵的行数和列数  
    scanf("%d %d", &r, &c);   // 输入新矩阵的行数和列数  
  
    int **arr = (int **)malloc(m * sizeof(int *));  // 为原始矩阵分配内存  
    for (i = 0; i < m; i++)  
    {  
        arr[i] = (int *)malloc(n * sizeof(int));  // 为每一行分配内存  
        for (j = 0; j < n; j++)  
        {  
            scanf("%d", &arr[i][j]);  // 输入数据到原始矩阵  
        }  
    }  
    printf("777\n");  // 打印一个数字，用于检查是否成功打印了新矩阵或原始矩阵  
  
    int **newa = (int **)malloc(r * sizeof(int *));  // 为新矩阵分配内存  
    int **res = matrixReshape(arr, m, n, newa);
    printf("888");  //ok 重塑矩阵，并检查是否成功返回新矩阵或原始矩阵  
    if (res == NULL)   // 如果重塑失败，释放已经分配的内存并返回错误信息  
    {  
        printf("Failed to reshape matrix.\n");  // 打印错误信息  
        for (i = 0; i < m; i++)   // 释放原始矩阵的内存  
        {  
            free(arr[i]);  
        }  
        free(arr);   // 释放原始矩阵的内存  
        return -1;   // 返回错误代码 -1，表示程序执行失败  
    }  

    else if (res == newa)  {
for (i=0;i<m;i++){
    for(j=0;j<n;j++){
       printf("%d",arr[i][j]); 
    }
    printf("999");
}
    }
return 0;
}    