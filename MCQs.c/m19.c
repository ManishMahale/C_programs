#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 10, y = -20;
    x = !x;
    y = !y;
    printf("x = %dy = %d\n", x, y);
    getch();
}
/*

x= !10
 = ! 1
x = 0

y= ! -20
 = ! 1
y= 0

O/P     x=0    y=0
*/