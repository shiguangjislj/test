#include <stdio.h>  
#include <stdbool.h>  
#include <stdlib.h>  
  
int **matrixReshape(int **arr, int m, int n, int **newa)  
{  
    int r = m * n;  // �¾��������  
    int c = n;      // �¾��������  
  
    if ((r * c) != m * n)  
    {  
        return arr;   // �޷����ܣ�����ԭʼ����  
    }  
    else  
    {  
        // Ϊ�¾�������ڴ�  
        newa[0] = (int *)malloc(r * c * sizeof(int));  
        if (newa[0] == NULL)   // ����ڴ�����Ƿ�ɹ�  
        {  
            return NULL;  
        }  
        // ת�����ݵ��¾���  
        for (int x = 0; x < m * n; x++)  
        {  
            newa[x / c][x % c] = arr[x / n][x % n];  
        }  
        return newa;   // �����¾���  
    }  
}  
  
int main()  
{  
    int m, n, i, j, r, c;  
    scanf("%d %d", &m, &n);  // ����ԭʼ���������������  
    scanf("%d %d", &r, &c);   // �����¾��������������  
  
    int **arr = (int **)malloc(m * sizeof(int *));  // Ϊԭʼ��������ڴ�  
    for (i = 0; i < m; i++)  
    {  
        arr[i] = (int *)malloc(n * sizeof(int));  // Ϊÿһ�з����ڴ�  
        for (j = 0; j < n; j++)  
        {  
            scanf("%d", &arr[i][j]);  // �������ݵ�ԭʼ����  
        }  
    }  
    printf("777\n");  // ��ӡһ�����֣����ڼ���Ƿ�ɹ���ӡ���¾����ԭʼ����  
  
    int **newa = (int **)malloc(r * sizeof(int *));  // Ϊ�¾�������ڴ�  
    int **res = matrixReshape(arr, m, n, newa);
    printf("888");  //ok ���ܾ��󣬲�����Ƿ�ɹ������¾����ԭʼ����  
    if (res == NULL)   // �������ʧ�ܣ��ͷ��Ѿ�������ڴ沢���ش�����Ϣ  
    {  
        printf("Failed to reshape matrix.\n");  // ��ӡ������Ϣ  
        for (i = 0; i < m; i++)   // �ͷ�ԭʼ������ڴ�  
        {  
            free(arr[i]);  
        }  
        free(arr);   // �ͷ�ԭʼ������ڴ�  
        return -1;   // ���ش������ -1����ʾ����ִ��ʧ��  
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