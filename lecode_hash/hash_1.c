#include <stdio.h>
#include <stdbool.h>
#include<string.h>
bool check(char *sent)//*sent/sent[]��ʲô�ݸ�����������׵�ַ
{
    int i, hash[256];
    memset(hash, 0, sizeof(hash));
    for (i = 0; sent[i]; i++)
    {
        hash[sent[i]]++;
    }
    for (i = 'a'; i <='d'; i++)
    {
        if (!hash[i])//�൱��hash[i]==0
        {
            return false;
        }
    }
    return true;//���뷵��һ��ֵ
}
int main()
{
    char str[] = "fff\n";
    bool result = check(str);
    if (result) {//����trueʱִ��if���
        printf("true");
    } else {
        printf("false");
    }

    return 0; 
}