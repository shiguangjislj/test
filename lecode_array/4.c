#include<stdio.h>
#include<stdlib.h>
void rotate(int** matrix, int n)
{
    int i,j;
    
    int matrix_new[100][100];
    for(i=0;i<n;i++){
for(j=0;j<n;j++){
    matrix_new[i][j]=matrix[i][j];
}
    }
  for(i=0;i<n;i++){
for(j=0;j<n;j++){
   matrix[j][n-i-1]=matrix_new[i][j];//每行有n个数
   

  }
}
}
int main(){
    int n,i,j;
    scanf("%d",&n);
    // int **a=(int **)malloc(n*n*sizeof(a[0]));
    // int **b=(int **)malloc(n*n*sizeof(b[0]));
     int **a = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        a[i] = (int *)malloc(n * sizeof(int));
    }

    // int **b = (int **)malloc(n * sizeof(int *));
    // for (i = 0; i < n; i++) {
    //     b[i] = (int *)malloc(n * sizeof(int));
    // }
    for(i=0;i<n;i++){
for(j=0;j<n;j++){
    scanf("%d",&a[i][j]);
}
    }
    rotate(a, n);
    for(i=0;i<n;i++){
for(j=0;j<n;j++){
    
    printf("%d ",a[i][j]);
}
printf("\n");
    }
free(a);
//free(b);
return 0;
}