#include <stdio.h>
#include<string.h>

//�������ȷ
    int main( ) {
        int n;
        printf("������");
        scanf("%d",&n);
        if (n<0){
            return 0;
        }
        
        char a [100];
        sprintf(a,"%d",n);
        int L=0;
        int R=strlen(a)-1;
        for(L,R;L<R;L++,R--){
        
            if (a[L]!=a[R]){
            
        printf("no");
            return 0;//��⵽��ֹͣ
            }
            else{
               printf("yesyes\n"); 
            }
        }
        return 0;
    }
