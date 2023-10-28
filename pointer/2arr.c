#include<stdio.h>
int main()
{
    int arr1[4]={1,2,3,5};
    int arr2[4]={2,4,7,9};
    int arr3[4]={0,9,7,4};
    int *ptoarr[3];
    ptoarr[0]=arr1;
    ptoarr[1]=arr2;
    ptoarr[2]=arr3;
    for (int i=0;i<3;i++)
    {
        int **p=ptoarr+i;
        for (int j=0;j<4;j++)
        {
            printf("%d",*(*p+j));
        }    
       printf("\n");//结束一个小循环后换行
    }
    return 0;
}
    