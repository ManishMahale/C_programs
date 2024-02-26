#include <stdio.h>
int main()
{
    int a[10], i, j, even = 0, odd = 0;
    printf(" Enter the Array Element");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[even] = a[i];
            even++;
        }
    }
    for (int i = 0; i < 10; i++)
    {

        if (a[i] % 2 == 1)
        {
            a[odd] = a[i];
            odd++;
        }
    }
    printf("Even  ");
    for (int i = 0; i < even; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Odd  ");
    for (int i = 0; i < odd; i++)
    {
        printf("\n%d ", a[i]);
    }
}
