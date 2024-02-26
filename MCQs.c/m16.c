#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 300, b = 10, c = 20;
    if (!(a >= 400))
        b = 300; // part of if statement
    c = 200;
    printf("b = %d c = %d", b, c) // no semocolon ;
  getch();
}
/*
no semocolon in printf function

error: expected ';' before 'return'
     return 0;
*/