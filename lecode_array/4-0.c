#include<stdio.h>
int  main(){
int a[2][4];
for (int i=0;i<2;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&a[i][j]);

    }
}
    for (int i=0;i<2;i++){
    for(int j=0;j<4;j++){
      printf("%d ",a[i][j]);

    }
    printf("\n");
    
}
    return 0;
}

