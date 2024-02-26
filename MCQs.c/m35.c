#include <stdio.h>
#include <conio.h>
void main()
{
    int c = 0, d = 5, e = 10, a;
    a = c > 1 ? d > 11 | e > 1 ? 100 : 200 : 300;
    printf("a = %d", a);
        getch();
}

/*
a = c > 1 ? (d > 11 | e > 1 ? 100 : 200 :) 300;
				ignore this condition
a = c > 1 ? (d > 11 | e > 1 ? 100 : 200 :) 300;
    0 > 1
    false
a = 300

if c > 1 was true  then compiler will check second turnary condition


*/