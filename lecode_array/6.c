#include<stdio.h>
#include<stdlib.h>//提供sort等通用的函数
#define min(a,b) (((a) < (b)) ? (a) : (b))
int cmp(const void *a,const void*b){
return( *(int*)a-*(int*)b);//升序排列
}

int main(){
    int N;
    
    scanf("%d\n",&N);
    int *arr=(int *)malloc(N*sizeof(arr[0]));
    for (int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    //printf("777");
    qsort(arr,N,sizeof(int),cmp);
    for (int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    // a[n][2];//二维
    int res=0;
    
    for(int i=0;i<N;i+=2){
        int a1=arr[i];
        int a2=arr[i+1];
        
         int num=min(a1,a2);
        res+=num;
        //printf("777");
    }
    
    printf("%d",res);
    free(arr);
    return 0;
}