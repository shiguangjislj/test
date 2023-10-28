#include <stdio.h>
//指针作为参数传递

void modifyValue(int *ptr) {
    *ptr = 42; 
}

int main() {
    int num = 10;
    printf("原始值： %d\n", num);

    
    modifyValue(&num);//&传递num地址,num值在函数内部被修改

    printf("修改后的值： %d\n", num);

    return 0;
}
