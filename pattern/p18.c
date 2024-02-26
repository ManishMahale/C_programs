/*      * * * * * * *                   i*j=6*7
        * 1 2 3 4 5 *
        * 1 2 3 4 5 *
        * 1 2 3 4 5 *
        * 1 2 3 4 5 *
        * * * * * * *       */

#include <stdio.h>
int main()
{
        int i, j;
        for (i = 1; i <= 6; i++)
        {
                for (j = 1; j <= 7; j++)
                {
                        if (j == 1 || j == 7 || i == 1 || i == 6)
                        {
                                printf("*");
                        }
                        else
                        {
                                printf("%d", j - 1);
                        }
                }
                printf("\n");
        }
}