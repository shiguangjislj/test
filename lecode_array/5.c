#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isHappy(int n)
{
    int res = n;//
    while (res != 1)
    {
        char a[10];
        sprintf(a, "%d", res);//
        int len = strlen(a);

        // while(res!=1)
        // {
            int tmp=0;
        for (int i = 0; i < len; i++)
        {
            int t = a[i]-'0';
            tmp+= t * t;
            //非快乐数会循环
// int hash[820]={0};
//             if (hash[tmp]==0)
//             {
//                 hash[tmp]++;
//             }
//             else{
//                 return false;
//             }
if(tmp>1&&tmp<10){
    return false;
}
        } 
        res=tmp;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d", &n);
    bool result = isHappy(n);
    if (result)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
