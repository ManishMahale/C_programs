/*
********1********     i*j=5*17
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****      */
#include <stdio.h>
int main()
{
    int f = 1, i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 17; j++)
        {
            if (j >= 10 - i && j <= 8 + i && f)
            {

                printf("%d", i);
                f = 0;
            }
            else
            {
                printf("*");
                f = 1;
            }
        }
        printf("\n");
    }
}