#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int digit, ld;

    for (int i = 0; i < n; i++)
    {
        digit = arr[i];
        while (digit != 0)
        {
            ld = digit % 10;
            printf("%c", ld + 64);
            digit /= 10;
        }
        printf("\n");
    }

    return 0;
}