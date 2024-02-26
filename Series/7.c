#include <stdio.h>
int main()
{
    int a=16,b,i,n;
    printf("Enter range->");
    scanf("%d",&n);
    printf("\n%d ",a);
    i=1;
    while (i<=n)
    {
        b=i*i;
        printf("%d ",b);

        a=a-2;
        printf("%d ",a);
    i++;
    }   
}