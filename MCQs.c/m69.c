#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = a;
    ptr++;
    *ptr = 500;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
/*
a[5] = {10, 20, 30, 40, 50};
//ptr work with address
ptr=a;  //base address of 'a' meanse a[0] assign to the ptr
ptr++;  // a[0]++ == a[1]

*prt=500;  //work with values
here 500 value assign to the a[1]

so, O/P:
10
500
30
40
50


*/