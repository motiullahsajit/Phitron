#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] > arr1[j])
            {
                swap(&arr1[i], &arr1[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr2[i] < arr2[j])
            {
                swap(&arr2[i], &arr2[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i] - arr2[i]);
    }
    printf("\n");

    return 0;
}