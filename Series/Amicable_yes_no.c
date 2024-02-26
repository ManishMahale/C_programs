/* input two numbers   num1 and num2
 sum of factors of num1  == num2
 sum of factors of num2 == num1    calld amicable number
 example  220,284       */

#include <stdio.h>
int main()
{
    int n1, n2, sum1 = 0, sum2 = 0, i = 1, j = 1;
    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf("%d", &n2);
    while (i < n1)
    {
        if (n1 % i == 0)
        {
            sum1 = sum1 + i;
        }
        i++;
    }
    printf("sum1 = %d == num2 = %d\n", sum1, n2);
    while (j < n2)
    {
        if (n2 % j == 0)
        {
            sum2 = sum2 + j;
        }
        j++;
    }
    printf("sum2 = %d == sum1 = %d\n", sum2, n1);
    printf("\n");
    if (n1 == sum2 && n2 == sum1)
    {
        printf("amicable");
    }
    else
    {
        printf("not amicable");
    }
    return 0;
}