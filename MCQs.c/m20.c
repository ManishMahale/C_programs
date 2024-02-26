#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 0, y = 1;
    y = !x;
    x = !y;
    printf("x = %d y = %d\n", x, y);
    getch();
}

/*
y = !x = !0 = 1
x = !y = !1 = 0
*/