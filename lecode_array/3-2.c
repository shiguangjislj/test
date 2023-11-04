#include <stdio.h>
#include<stdlib.h>
int function(int *nums,int n,int *arr){
    int k=0;
    int i;
    for(i=0;i<n;i++){
        if(nums[i]!=nums[i+1]){
            k++;
            nums[k]=nums[i];
        }
        for(int j=0;j<k;j++){
            arr[j]=nums[i];
        }
    }
    return arr;
}
int main(){
    int n;
    printf("n:");
    scanf("%d",&n);
    int *nums=(int *)malloc(n*sizeof(nums[0]));
    if (nums == NULL) {
        printf("failed\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int res=function(nums,n,res);
    printf("%d",res);
    free(nums);
    return 0;
}
