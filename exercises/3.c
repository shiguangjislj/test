#include<stdio.h>
        int gcd (int a,int b){
            while (b!=0){
                int temp=b;
                b=a%b;//ע���д�ɳ���'/'��
                a=temp;
            }
            return a;
        }
        int main(){
            int m,n;
            printf("��������λ������");
            scanf("%d,%d",&m,&n);
            if(m<0||n<0)
            printf("������������");
            else {
            int res=gcd(m,n);
            printf("%d",res);
            }
        return 0;
    }