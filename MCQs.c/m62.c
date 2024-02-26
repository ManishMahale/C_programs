#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        a[i] = (a[i] + 20);
        printf("%d\n", a[i]);
    }
    return 0;
}
/*
O/P:
30
40
50
60
70

solution:
a[i]= a[i] + 20;
        10 + 20 == 30
        20 + 20 == 40
        30 + 20 == 50
        40 + 20 == 60
        50 + 20 == 70
*/