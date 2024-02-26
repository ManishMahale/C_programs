// Write a C program to find all prime factors of a number.

#include <stdio.h>
int main()
{
    int i, j, n, count;
    printf("enter Number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)  //factors
        {
            count = 0;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0) //prime number
                {
                    count = 1;
                    break;
                }
            }

            if (count == 0)
            {
                printf("%d  ", i);
            }
        }
    }
    return 0;
}