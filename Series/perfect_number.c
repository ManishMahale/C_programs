// find perfect number
// perfect number means sum of all factors of n number is also n ex. factors of 6 = 1+2+3= 6
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("perfect number\n");
    }
    else
    {
        printf("not perfect number");
    }
    return 0;
}