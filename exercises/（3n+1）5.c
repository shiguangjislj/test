#include <stdio.h>
int main()
{
    int count,n;
    count=0;
    printf("��Ȼ��:");
    scanf("%d",&n);
    if(n<0)
    printf("�������");
    while(n!=1){
    if(n%2==0){
    n=n/2;
    //count++;
    }
    else if(n%2!=0){
    n=(n*3+1)/2;
    }
    
    count++;//ÿ�ζ�ѭ��һ�飬count++Ҫд�ڸ���if����⣬while��
    }
    printf("%d",count);
return 0;
}
