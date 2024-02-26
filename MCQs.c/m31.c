#include <stdio.h>
#include <conio.h>
void main()
{
    int c = 0, d = 5, e = 10, a;
    a = c > 1 ? d > 11 | e > 1 ? 100 : 200 : 300;
    printf("a = %d", a)  // no semocolon ';'
        getch();
}
/*  //how to solve this code?
O/P:
In function 'main':
c:8:9: error: expected ';' before 'getch'
      getch();
         ^~~~~
         */