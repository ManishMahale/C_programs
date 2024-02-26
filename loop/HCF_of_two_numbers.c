// find HCD (GCD) of two numbers
// HCF= highest common factor
// GCD= greatest common divisior
#include <stdio.h>
int main()
{
    int h, n, n1, i;
    printf("enter two numbera: ");
    scanf("%d%d", &n, &n1);

    for (i = 1; i <= n && i <= n1; i++)
    {
        if (n % i == 0 && n1 % i == 0)
            h = i;
    }

    printf("HCF = %d", h);

    return 0;
}
// // input 8, 16
// factors of 8 = 1, 2, 4, ➡️8
//           16 = 1, 2, 4, ➡️8, 16
//           HCF = 8