#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//2n个数找n个相等数对
bool divideArray(int* nums, int n){
int hash[501];
int i,n;
 for (int i=0;nums[i];i++){
        hash[nums[i]]++;
    }
    for (int i=0;i<n;i++){
        if(hash[nums[i]]&1==1){
            return false;
        }
    }
    return true;
}