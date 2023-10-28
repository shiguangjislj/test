#include<stdio.h>
int main (){
    char str[10]="helloworld";
 /*printf(str);
   printf("%s\n",str);
   */
  int i=0;
  while(str[i]!='\0'){
    putchar(str[i++]);
  }
  
 return 0;
}