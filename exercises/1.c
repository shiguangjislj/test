#include<stdio.h>
int main(){
    int m,n;
    char s,A,B,C;
    printf("ÇëÊäÈë³É¼¨£º");
    scanf("%d,%d",&m,&n);
    if (m>=60&&n>=60)
    s='A';
    
    else if( m<60||n<60)
    s='B';
    
    else if(m>100||m<0||n>100||n<0)
    s='C';
    switch(s){
        case 'A':
        printf("pass");
        break;
        case 'B':
        printf("not pass");
        break;
        case'C':
       
        printf("wrong dates");
        break;
    }
return 0;

}