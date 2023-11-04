#include<stdio.h>
#include<string.h>
#include<stdlib.h>//返回好数对数
int foundcount(int *num,int n){
    int hash[101]={0};
    int i;
    int count=0;
// memset( *hash,0,sizeof(hash));
    for(i=0;i<n;i++)
    {
        count+=hash[num[i]];//hash[num[i]]初始值为0？对！
        hash[num[i]]++;//
    }
    return count;
}
int main(){
    int n;
    printf("n:");
    scanf("%d",&n);
    int *nums=(int *)malloc(n*sizeof(nums[0]));
    if (nums == NULL) {
        printf("failed\n");
        return 1;//动态分派失败时返回非零值，程序成功结束返回0
    }
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int res=foundcount(nums,n);//传递参数一一对应
    printf("%d",res);
    
    free (nums);
    
    return 0;
}