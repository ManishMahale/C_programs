/*  A
    A B A
    A B C B A
    A B C D C B A
    A B C D E D C B A   */

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {   
        char count='A';

        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c ",count);
                if(j<5)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }

        }
        printf("\n");
    }
    return 0;
}