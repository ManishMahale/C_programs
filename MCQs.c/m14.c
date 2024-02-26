#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 100, b = 200, c;
    c = (a == 100 || b > 200);
    printf("c = %d", c);
    getch();
}

/*
c = (a == 100 || b > 200);
c = (100 == 100 || 200 > 200)
        true        false
 in OR gate if any obe condition is true then result will be true

 O/P:  c = 1        

*/