#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//���غ�����˼·�����⣬����дֻ�ܷ���ֻ�������ε���������2��2��2�ᱻ����
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
        return 1;//��̬����ʧ��ʱ���ط���ֵ������ɹ���������0
    
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int res=foundcount(num);
    printf("%d",res);
    free (num);
    }
    return 0;


}