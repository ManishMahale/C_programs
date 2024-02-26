#include <stdio.h>
int main()
{
    int j = 1;
    int a[5] = {5, 4, 3, 5, 2};
    int d = a[4];
    int e = a[d] + 10;
    int f = a[d + 2];
    printf("D=%d\tE=%d\tF=%d\n", d, e, f);
    return 0;
}
/*
O/P: D=2, E=13, F=2

solutoin:
a[5] = {5, 4, 3, 5, 2};

int d = a[4]; == d == 2
int e = a[d] + 10; == e = a[2] + 10 ==  13
f = a[d + 2]; == a[2+2]==a[4]==  2
*/