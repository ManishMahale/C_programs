#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 30, b = 40, x;
    x = (a != 10) && (b = 50);
    printf("x = %d", x);
    getch();
}
/*
x = (a != 10) && (b = 50);
x= (30 != 10) && (40=50)
                    50     //now b==50
 =  true          true
 x = 1 
 */