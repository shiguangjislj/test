#include <stdio.h>
#include<string.h>

//输出不正确
    int main( ) {
        int n;
        printf("整数：");
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
            return 0;//检测到就停止
            }
            else{
               printf("yesyes\n"); 
            }
        }
        return 0;
    }
