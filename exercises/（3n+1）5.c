#include <stdio.h>
int main()
{
    int count,n;
    count=0;
    printf("自然数:");
    scanf("%d",&n);
    if(n<0)
    printf("输入错误");
    while(n!=1){
    if(n%2==0){
    n=n/2;
    //count++;
    }
    else if(n%2!=0){
    n=(n*3+1)/2;
    }
    
    count++;//每次都循环一遍，count++要写在各个if语句外，while内
    }
    printf("%d",count);
return 0;
}
