// frequency of digit  > mid of array == majority element  

#include <stdio.h>
int main()
{
    int i, svalue, mid, len, a[10];

    printf("enter array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter search value:\n");
    scanf("%d",&svalue);
    int count;
    for(i=0;i<10;i++)
    {
        if(a[i]==svalue)
        {
            count++;
        }
    }
    len=sizeof(a)/sizeof(a[0]);
    mid=len/2;

    if(count>mid)
    {
        printf("majority element is : %d ",svalue);
    }
    else
    {
        printf("not a majority element");
    }
    return 0;
}