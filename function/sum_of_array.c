/*WAP to create function name as  int getSum(int a[]): this function is
used for accept array as parameter and calculate its sum and return it. */

#include <stdio.h>
int main()
{
    int getSum(int a[]);
    int i, a[5],result;
    printf("\nenter 5 numbers of an array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    result=getSum(a);
    printf("Sum is %d",result);
    return 0;
}
int getSum(int a[])
{
    int i, Sum=0;
    for(i=0;i<5;i++)
    {
       Sum=Sum+a[i];
    }
    return Sum;
}