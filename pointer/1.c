#include<stdio.h>
int main(){
    int n=1;
    int *pn=&n;
    char c;
    char *pc=&c;
    printf("%d\n",pn);
    printf("%d\n",*pn);
    printf("%d\n",sizeof(pn));
    printf("%d\n",sizeof(pc));
    printf("%d",pn-1);//ָ���������������
return 0;
}