#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 100; // variable names are case sensetive
    if (!!X)     // capital X is undeclared
        printf("x = %d", !x);
    else
        printf("x = %d", x);
    getch();
}

/*
O/P:

c: In function 'main':
c:5:7: error: 'X' undeclared (first use in this function)
 if (!!X) //capital X is undeclared
       ^
c:5:7: note: each undeclared identifier is reported only
once for each function it appears in
*/