#include<stdio.h>
#include<stdlib.h>//提供sort等通用的函数
int cmp(const a,const void*b){
return( *(int*)a-*(int*)b);//升序排列
}
int main(){
    int arr[]={1,2,3,0};
    size_t len=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,len,sizeof(int),cmp);//包括数组首地址，数值长度，单个元素所占字符，比较函数
    for(size_t i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}