#include<stdio.h>
#include<stdlib.h>//�ṩsort��ͨ�õĺ���
int cmp(const a,const void*b){
return( *(int*)a-*(int*)b);//��������
}
int main(){
    int arr[]={1,2,3,0};
    size_t len=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,len,sizeof(int),cmp);//���������׵�ַ����ֵ���ȣ�����Ԫ����ռ�ַ����ȽϺ���
    for(size_t i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}