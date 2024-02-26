/*
AB
123
CDEF
4567
GHIJK
        */

#include <stdio.h>
int main()
{
    int i, j;
    char ch = 'A', ch1 = '1';
    for (i = 1; i <= 5; i++)
    {

        for (j = 1; j <= 5; j++)
        {
            if (i <= 3)
            {
                if (i % 2 != 0 && j <= i + 1)
                {
                    printf("%c", ch);
                    ch++;
                }
                else if (i % 2 == 0 && j <= i + 1)
                {
                    printf("%c", ch1);
                    ch1++;
                }
            }
            else
            {
                if (i % 2 != 0 && j <= i)
                {
                    printf("%c", ch);
                    ch++;
                }
                else if (i % 2 == 0 && j <= i)
                {
                    printf("%c", ch1);
                    ch1++;
                }
            }
        }

        printf("\n");
    }
}
