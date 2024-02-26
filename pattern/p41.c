#include <stdio.h>
int main()
{
    int i, j, k = 1;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=14;j++)
        {
            if((i+j)==1)
            {
                printf("%d",k);
                if(7>j)
                {
                    k=i-1;
                }
                else
                {
                    k=1;
                }
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}