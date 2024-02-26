/*Create array of size 6 and store 5 values at initial level and
input index and value then insert value on specified index and
shift value on next index before inserting value.*/

#include <stdio.h>
int main()
{
    int a[6], i, index, value;
    int len = sizeof(a) / sizeof(a[0]); //  6*2 bit= 12 bit____ 12 bit / 2 bit == 6 bit
    printf("\nEnter value in array\n");
    for (i = 0; i < (len - 1); i++)
    {
        scanf("%d", &a[i]); // 1 2 3 4 5
    }
    printf("\nEnter index\n"); // index - 2
    scanf("%d", &index);
    printf("\nEnter value\n"); // value - 7
    scanf("%d", &value);

    for (i = (len - 2); i >= index; i--) // for(i=(6-2);4>=2;i--)
    {
        a[i + 1] = a[i]; // a[4 + 1] = a[4] ,,,,a[3+1]=a[3]
    }
    a[index] = value; // a[2]=7
    printf("\nAfter inserting value\n");
    for (i = 0; i < len; i++)
    {
        printf("a[%d]----->%d\n", i, a[i]);
    }

    return 0;
}