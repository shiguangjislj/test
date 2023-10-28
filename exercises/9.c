#include<stdio.h>
#include<stdlib.h>//scanf扫描村民财产时数字用 空格分离
int cmp(const void*a,const void*b){ 
    return (*(int*)b-*(int*)a);
}
int main()
{
    int n;
    printf("镇上人数：");
    scanf("%d",&n);
    int m;
    printf("富豪人数：");
    scanf("%d",&m);
   // int A[10000];
   // scanf("%d",&A[n])
   
    int *A = (int *)malloc(n * sizeof(int));
if (n<m){
    printf("1村民财产:");
    for (int i=0;i<n;i++){
        scanf("%d ",&A[i]);
        printf("%d\n",&A[i]);
        
    }
    
    return 0;
}
printf("2村民财产");
    for (int i=0;i<n;i++)
    {
        
        scanf("%d",&A[i]);

    }
    //size_t len=sizeof(A)/sizeof(A[0]);
    qsort(A,n,sizeof(int),cmp);
    printf("富豪财产排列：");
    for (int j=0;j<m;j++)
    {
        
        //scanf("%d ",&A[j]);
        printf("%d ",A[j]);
    }
free (A);
return 0;


}