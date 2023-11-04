#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//返回好数，思路有问题，这样写只能返回只出现两次的数，列如2，2，2会被丢弃
int foundcount(int *nums){
    int hash[101];
    int i,count;
  void *memset(void*hash,0,101*sizeof(*hash));
    for(i=0;nums[i];i++)
    {
        hash[nums[i]]++;
        if (hash[i]==2)
 count++;
    }
    return count;
}
int main(){
    int n;
    printf("n:");
    scanf("%d",&n);
    int *num=(int *)malloc(n*sizeof(num[0]));
    if (num == NULL) {
        printf("failed\n");
        return 1;//动态分派失败时返回非零值，程序成功结束返回0
    
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int res=foundcount(num);
    printf("%d",res);
    free (num);
    }
    return 0;


}