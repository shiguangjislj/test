#include <stdio.h>
int main()
{
    int i, j, count;
    count = 0;
    for (i = 0; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                printf("");
                break;
            }
            else
            {
                printf("%d", i);
                count++;
                // for(n=0;n<=m;n++)
                if (count % 5 == 0)
                    printf("\n");
                else
                    printf("");
            }
        }
    }
    return 0;
}
