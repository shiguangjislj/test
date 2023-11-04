#include <stdio.h>
#include <stdlib.h>
int removeDuplicates(int *nums, int n)
{
    int i, j, a, sum, k=0;
    int *res = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        int tmp = nums[i];
       // int ok = 0; // 记录是否在res中有tmp的重复元素
        //遍历res
        for ( j = 0; j < k ; j++)
        { 
            if(res[j]==tmp){
               // ok = 1; //有重复的
                goto HH;
            }
        }
        
        // if (!ok) {
        //     //这里!ok，没有重复的，那么放到res里
            res[k]=tmp;
            k++;
        // }
        HH:
        // for (j = i+1; j < n ; j++)
        // {

        //     if (nums[i] == nums[j])
        //     {
        //         nums[j] = a;
        //     }

        //     if (nums[i] == a)
        //     {
        //         sum++;
        //         for (k = i; k < n - sum; k++)
        //         {
        //             nums[k] = nums[k + 1];
        //         }
        //         for (i = 0; i = n - sum; i++)
        //         {
        //             nums[i];
        //         }
        //     }
        // }
    }
     for ( j = 0; j < k ; j++){
        nums[j]= res[j];
     }


    return k;
}
int main()
{
    int n, i;
    int sum = 0;
    printf("n:");
    scanf("%d", &n);
    int *nums = (int *)malloc(n * sizeof(nums[0]));
    if (nums == NULL)
    {
        printf("failed\n");
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int len = removeDuplicates(nums, n);

    // printf("%d",nums);
    // printf("%d", n - sum);
    printf("%d", len);
    free(nums);
    return 0;
}
