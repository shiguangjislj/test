#include<stdio.h>
#include<stdlib.h>//scanfɨ�����Ʋ�ʱ������ �ո����
int cmp(const void*a,const void*b){ 
    return (*(int*)b-*(int*)a);
}
int main()
{
    int n;
    printf("����������");
    scanf("%d",&n);
    int m;
    printf("����������");
    scanf("%d",&m);
   // int A[10000];
   // scanf("%d",&A[n])
   
    int *A = (int *)malloc(n * sizeof(int));
if (n<m){
    printf("1����Ʋ�:");
    for (int i=0;i<n;i++){
        scanf("%d ",&A[i]);
        printf("%d\n",&A[i]);
        
    }
    
    return 0;
}
printf("2����Ʋ�");
    for (int i=0;i<n;i++)
    {
        
        scanf("%d",&A[i]);

    }
    //size_t len=sizeof(A)/sizeof(A[0]);
    qsort(A,n,sizeof(int),cmp);
    printf("�����Ʋ����У�");
    for (int j=0;j<m;j++)
    {
        
        //scanf("%d ",&A[j]);
        printf("%d ",A[j]);
    }
free (A);
return 0;


}