#include <stdio.h>

int main()
{
    int j = 1;
    int a[5] = {10, 20, 30, 40, 50};
    int c = a[j++];
    printf("C =%d\n", c);
    return 0;
}
/*
O/P: 20

c=a[j++]   // post increment

c=a[1]
c=20
j++ = 2
*/