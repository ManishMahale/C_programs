/*Write a C program to check whether a number is Strong number or not.

➡️Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. Given a number, check if it is a Strong Number or not.
Examples:

Input  : n = 145
Output : Yes
Sum of digit factorials = 1! + 4! + 5!
                        = 1 + 24 + 120
                        = 145           */
#include <stdio.h>
int main()
{
    int temp, i, n, rem, fac, sum = 0;
    printf("enter  number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        fac = 1;
        for (i = 1; i <= rem; i++)
        {
            fac = fac * i; // to find factorial
        }
        sum = sum + fac;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("strong number");
    }
    else
    {
        printf("not strong number");
    }
    return 0;
}