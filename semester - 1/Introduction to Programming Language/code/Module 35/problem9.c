#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int t, n, count;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int arr[n];
        count = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] != arr[j])
                {
                    if (arr[i] > arr[j] && gcd(arr[i], arr[j]) == 1)
                    {
                        count++;
                    }
                    if (arr[i] < arr[j] && gcd(arr[j], arr[i]) == 1)
                    {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}