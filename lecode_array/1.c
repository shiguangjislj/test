#include<stdio.h>
//#include<stdlib.h>
int main(){
int n,target;

printf("«Î ‰»În÷µ");
scanf("%d",&n);
printf("target");
scanf("%d",&target);
int *a=(int *)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for (int  j=0;j<n-1;j++){
    for (int  k=j+1;k<n;k++){
    
    if(a[j]+a[k]==target)
    printf("[%d %d]",j,k);
    }
}
free(a);
return 0;
}