#include<stdio.h>
        int gcd (int a,int b){
            while (b!=0){
                int temp=b;
                b=a%b;//注意别写成除号'/'了
                a=temp;
            }
            return a;
        }
        int main(){
            int m,n;
            printf("请输入两位正整数");
            scanf("%d,%d",&m,&n);
            if(m<0||n<0)
            printf("请输入正整数");
            else {
            int res=gcd(m,n);
            printf("%d",res);
            }
        return 0;
    }