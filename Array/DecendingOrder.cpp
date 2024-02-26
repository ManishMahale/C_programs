#include <stdio.h>

int main()
{
    int a[5], i, j, temp;
    printf("Enter five values:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {

            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf(" Array in Ascending Order ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
