// C program to find sum of all prime numbers between 1 to n.

#include <stdio.h>
int main()
{
    int i, j, n, c, sum = 0;
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d", &n);
    printf("Prime numbers are:-\n");
    for (i = 2; i <= n; i++)
    {
        c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\nsum %d", sum);
    return 0;
}