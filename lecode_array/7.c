#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int **matrixReshape(int **arr, int m, int n,int**newa)
{
    int r ;
    int c;
    //scanf("%d %d\n",&r,&c);
    //printf("99");
    if (m * n !=(r) * (c))
    {
        return arr;
    }
    else{
        //数组转移
       /*/ int i = 0;
        int j = 0;int line=0;int row=0;
        for (row = 0; row < r; row++)
        {
            newa[row][line] = arr[i][j++];
            line++;
            if (line >= c)
            {
                row++;
                line = 0;
            }
        }
    }*/
    for(int x=0;x<m*n;x++){
        newa[x/c][x%c]=arr[x/n][x%n];
    }
    }
    return newa;
    }
int main()
{
    

    int m, n, i, j, r, c;
  scanf("%d %d", &m, &n);
scanf("%d %d",&r,&c);
printf("777");//ok

    int **arr= (int **)malloc(m * sizeof(int *));
    printf("778");//ok

     if (arr == NULL)
    {
        printf("failed\n");
        return 1;
    }
    printf("788\n");//ok
    printf("%d %d",m,n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            scanf("%d", &arr[i][j]);
        
        }
        printf("777");//wrong??到底为什莫，，，

    }
    

     int **newa = (int **)malloc(r * sizeof(int *));
     if (newa == NULL)
    {
        printf("failed\n");
        return 1;
    }
  int **res=  matrixReshape(arr,m,n,newa);
  
      if(res==newa) {
         for (int k = 0; k < r; k++)
        {
            for (int l = 0; l < c; l++)
            {
                printf("%d", newa[k][l]);
            }
        }
      }
else{
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; i++)
            {
                printf("%d", arr[i][j]);
            }
        }
    }
    free(arr);
    free(newa);
    return 0;
}
