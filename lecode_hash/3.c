#include <stdio.h>
#include <stdlib.h>
int checknums(int *nums, int n, int k)
{
    int hash[101] = {0};
    int ans;
    // memset(hash,0,101*sizeof(hash));
    for (int i = 0; i < n; i++)
    {
        int X;
        ans = 0;
        if (X >= 0 && X <= 100)
        {

            X = nums[i] + k;
            ans += hash[X]; // i=0Ê±ans=0/1£¿0!
             hash[X]++;
        }
        if (X >= 0 && X <= 100)
        {
            int X = nums[i] - k;
            int ans = ans + hash[X];
             hash[X]++;
        }
       // hash[nums[i]]++;
    }
    return ans;
}
int main()
{
    int n, k, ans;
    scanf("%d %d", &n, &k);
    printf("nums:");
    int *nums = (int *)malloc(n * sizeof(nums[0]));
    if (nums == NULL)
    {
        printf("failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int res = checknums(nums, n, k);
    printf("%d", &ans);
    free(nums);
    return 0;
}