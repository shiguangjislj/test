#include<stdio.h>
#include<string.h>
#include<stdlib.h>//���غ�������
int foundcount(int *num,int n){
    int hash[101]={0};
    int i;
    int count=0;
// memset( *hash,0,sizeof(hash));
    for(i=0;i<n;i++)
    {
        count+=hash[num[i]];//hash[num[i]]��ʼֵΪ0���ԣ�
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
        return 1;//��̬����ʧ��ʱ���ط���ֵ������ɹ���������0
    }
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int res=foundcount(nums,n);//���ݲ���һһ��Ӧ
    printf("%d",res);
    
    free (nums);
    
    return 0;
}