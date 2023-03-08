#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    char text[n];
    scanf("%s", text);
    int flag, count = 0;
    for (int i = 0; i < n; i++)
    {
        flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && text[i] == text[j])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}