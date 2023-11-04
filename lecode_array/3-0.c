#include <stdio.h>
//删除数组中某一值
int main(){
    int i,k;
    int sum=0;
    int nums[7]={1,1,3,6,4,6,7};
    for (i=0;i<7;i++){
if(nums[i]==6){
    sum++;
   // nums[i]=nums[i+1];

    for (k=i;k<7-sum;k++){//k=i，NOT=0
  nums[k]=nums[k+1];
       
    }
}
    }
    for(int i=0;i<7-sum;i++)  //仅输出有效部分
	{
		
		printf("%d",nums[i]);
	}

return 0;
    }
