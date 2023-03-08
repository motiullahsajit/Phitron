#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("^\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < (2 * i) + 1; j++)
            {
                if ((i + 1) % 2 == 0)
                    printf("*");
                else if ((i + 1) % 2 != 0)
                    printf("^");
            }
            printf("\n");
        }
    }
    return 0;
}