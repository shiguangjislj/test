#include <stdio.h>
int main()
{
    int i,a,n,m,count;
    count=0;
    scanf("%d %d",&n,&m);
    for (a=n;a<=m;a++){
        for(i=2;i*i<=m;i++){
if(a%i==0){
printf("");
break;
}
else {
    printf("%3d",a);//���ֵռ�����ַ�����ʹ�ж���
    count++;
        }
if (count%10==0){
    printf("\n");

}
break;//����break���ڵ�ѭ��
        }
        //break;
    }

   return 0; 
}