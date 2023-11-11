/* Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    int m=matSize;
    int n=matColSize[0];
    if(m*n!=r*c){
        *returnSize=matSize;
        *returnColumnSizes=matColSize;
        return mat;
    }
    *returnSize=r;
    *returnColumnSizes=malloc(sizeof(int)*r);
    int **ans=malloc(sizeof(int*)*r);
    for(int i=0;i<r;i++){
        (*returnColumnSizes)[i]=c;
        ans[i]=malloc(sizeof(int)*c);
    }
    for(int x=0;x<m*n;x++){
        ans[x/c][x%c]=mat[x/n][x%n];
    }
    return ans;
}
int main(){
    
    int m, n, i, j, r, c;
  scanf("%d %d\n", &m, &n);
  scanf("%d %d\n",&r,&c);

    int **mat= (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
    {
        for (j = 0; i < n; i++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    

     int **ans = (int **)malloc(r * sizeof(int *));
   int **res=** matrixReshape(mat,)
}
