#include <stdio.h>

int main()
{

    int t, n, x, ind, count = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        ind = -1;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        scanf("%d", &x);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                ind = i + 1;
                break;
            }
        }
        count++;
        if (ind == -1)
        {
            printf("Case %d: Not Found\n", count);
        }
        else
        {
            printf("Case %d: %d\n", count, ind);
        }
    }

    return 0;
}