#include<stdio.h>
#include<stdlib.h>
void rotate(int** matrix, int n)
{
    int i,j;
    int tmp=0;
    
   // int matrix_new[100][100];
    for(i=0;i<n;i++){
for(j=0;j<n;j++){
    tmp=matrix[i][j];
    matrix[i][j]=matrix[j][i];
    matrix[j][i]=tmp;
}
    }
    for(i=0;i<n/2;i++){
for(j=0;j<n;j++){
    tmp=matrix[i][j];
    matrix[i][j]=matrix[i][n-j-1];
    matrix[i][n-j-1]=tmp;
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

    int **b = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        b[i] = (int *)malloc(n * sizeof(int));
    }
    for(i=0;i<n;i++){
for(j=0;j<n;j++){
    scanf("%d",&a[i][j]);
}
    }
    for(i=0;i<n;i++){
for(j=0;j<n;j++){
    
    printf("%d ",a[i][j]);
}
rotate(a, n);
printf("\n");
    }
free(a);
free(b);
return 0;
}
