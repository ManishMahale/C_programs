#include <stdio.h>9
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i = 1;
    for (; i != 5;)
    {
        printf("%d\n", a[i++]);
    }
    return 0;
}
/*
O/P:
20
30
40
50

Solution:
i=1;

1 != 5
print = 20
i++ = 2

2 != 5
print = 30
i++ = 3

3 != 5
print = 40
i++ = 4

4 != 5
print = 50
i++ = 5

5 != 5
condition false

*/