#include <stdio.h>
//ָ����Ϊ��������

void modifyValue(int *ptr) {
    *ptr = 42; 
}

int main() {
    int num = 10;
    printf("ԭʼֵ�� %d\n", num);

    
    modifyValue(&num);//&����num��ַ,numֵ�ں����ڲ����޸�

    printf("�޸ĺ��ֵ�� %d\n", num);

    return 0;
}
