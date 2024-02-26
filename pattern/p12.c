/*  1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1   */

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {   
        int count=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%d ",count);
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