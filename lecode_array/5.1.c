#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//快乐数
int getSum(int n) {
    
    int sum = 0;
    while (sum<10) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    printf("ooo");
    return sum;
}

bool isHappy(int n){
    int sum = getSum(n);
    int hash[820] = {0};

    while (sum != 1) {
        if (hash[sum] == 1) {
            return false;
        } else {
            hash[sum]++;
        }
        sum = getSum(sum);
    }
    
    return true;//能跳出出循环就返回true
}
int main()
{
    
    int n;
    scanf("%d", &n);
    //int sum = getSum(n);
bool result=isHappy(n);
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


