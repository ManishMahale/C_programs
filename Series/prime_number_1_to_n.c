// C program to print all Prime numbers between 1 to n.

#include <stdio.h>
void main()
{
    int i, j, n, m = 0;
    printf("Enter the number till which you want prime numbers : ");
    scanf("%d", &n);
    printf("Prime numbers are:-\n");
    for (i = 2; i <= n; i++)
    {
        int c = 0;
        for (j = 2; j <= i / 2; j++) // or for (j = 2; j < i ; j++) but first one takes low time because of less itration being perform
        {
            if (i % j == 0) // to find factors
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            printf("%d ", i);
            m++;
        }
    }
    printf("\nNumber Of Prime Numbers:\n%d", m);
}