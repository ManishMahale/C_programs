#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr, *ptr1;
    ptr = a;
    ptr1 = ptr;
    *ptr1 = 100;
    ptr = ptr + 2;
    *ptr = 600;
    ptr1 = ptr1 + 2;
    *ptr1 = 700;
    printf("display the array values\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
/*
O/P:
display the array values
100
20
700
40
50

Solution:
a[5] = {10, 20, 30, 40, 50};

ptr = a; //base address a[0] of array 'a' assign to the 'ptr' pointer veriable 

ptr1 = ptr; //address of ptr assign to the ptr1

*ptr1 = 100;  //100 value assign to the pointer ptr1

ptr = ptr + 2; // ptr move 2 blocks forwerd  a[2]

*ptr = 600;  //600 assign to the pointer ptr
//mense a[2] == 600

ptr1 = ptr1 + 2;  // ptr1 move 2 blocks forward
mense, ptr1 = a[2]

*ptr1 = 700;  // a[2] == 700

*/