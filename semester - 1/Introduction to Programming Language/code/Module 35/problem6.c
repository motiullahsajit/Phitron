#include <stdio.h>

void print_prime(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        int flag = 1;
        if (i == 1)
        {
            printf("%d ", i);
        }
        else
        {
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                }
            }
            if (flag == 1)
            {
                printf("%d ", i);
            }
        }
    }
    printf("\n");
}

int main()
{

    int n, x, y;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        print_prime(x, y);
    }

    return 0;
}
