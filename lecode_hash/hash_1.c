#include <stdio.h>
#include <stdbool.h>
#include<string.h>
bool check(char *sent)//*sent/sent[]出什么递给函数数组的首地址
{
    int i, hash[256];
    memset(hash, 0, sizeof(hash));
    for (i = 0; sent[i]; i++)
    {
        hash[sent[i]]++;
    }
    for (i = 'a'; i <='d'; i++)
    {
        if (!hash[i])//相当于hash[i]==0
        {
            return false;
        }
    }
    return true;//必须返回一个值
}
int main()
{
    char str[] = "fff\n";
    bool result = check(str);
    if (result) {//返回true时执行if语句
        printf("true");
    } else {
        printf("false");
    }

    return 0; 
}