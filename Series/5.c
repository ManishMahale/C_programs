/*Example: WAP to print following type of series
1  4   9  16  …….n terms    */
#include<stdio.h>
int main()
{
    int n, p = 1;
    printf("enter number: ");
    scanf("%d", &n);
    while(p <= n)
    {
        printf("%d ", p * p);
        p++;
    }
    return 0;
}