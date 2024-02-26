/*	A B C D E
    B C D E F
    C D E F G
    D E F G H
    E F G H I	*/

#include <stdio.h>
int main()
{
    int i, j;
    char ch;
    for (i = 1; i <= 5; i++)
    {
        ch = 64 + i;
        for (j = 1; j <= 5; j++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}