#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i = 4;
    for (; i != -1;)
    {
        printf("%d\n", a[i--]);
    }
    return 0;
}
/*
O/P:
50
40
30
20
10

solution:

a[5] = {10, 20, 30, 40, 50};

i=4
print = 50
i-- = 3

i = 3
ptint = 40
i-- = 2

i = 2
print = 30
i-- = 1

i=1
print = 20
i-- = 0

i = 1
print = 10
i-- = -1

*/