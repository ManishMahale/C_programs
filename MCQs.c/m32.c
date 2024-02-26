#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 10, b = 10;
    printf("ans = %d", a > b ? a * a : b / b);
    getch();
}

/*
a > b ? a * a : b / b
10 > 10 ? 10 * 10 : 10 / 10
 false ?  100     :  1
   0   ?  100     :  1

O/P:   ans = 1
*/