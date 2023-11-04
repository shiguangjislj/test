#include<stdio.h>
#include<stdlib.h>
int sumofunique(int *nums,int n){
    int hash[101]={0};
    int sum=0;
    for (int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for (int i=0;i<n;i++){
        if(hash[nums[i]]==1){
            sum+=nums[i];
        }
    }
    return sum;
}
int main(){
    int n,i;
    scanf("%d\n",&n);
    int *nums=(int *)malloc(n*sizeof(nums[0]));
    
   // scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
     if (nums == NULL)
    {
        printf("failed\n");
        return 1;
    }
    int sum=sumofunique(nums,n);
    printf("%d",sum);
    free(nums);
    return 0;
}