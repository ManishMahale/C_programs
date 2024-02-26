#include <stdio.h>
int main()
{
    int j = 1;
    int a[5] = {10, 20, 30, 40, 50};
    int c = a[++j];
    printf("C =%d\n", c);
    return 0;
}
/*

o/P: 30
c=a[++j]
c=a[2]
c=30
*/