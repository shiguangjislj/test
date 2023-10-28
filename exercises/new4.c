#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
    //return true;
}

int main()
{
    int i;
    int count = 0;
    for (i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            count++;
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
