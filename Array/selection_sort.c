#include <stdio.h>
int main()
{
    int i, j, temp, min_index, a[5];
    int len = sizeof(a) / sizeof(a[0]);

    printf("enter values in arrays:\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < (len - 1); i++)
    {
        min_index = i;
        for (j = i+1; j < len; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    printf("\n\nAfter sorting:\n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", a[i]);
    }
}